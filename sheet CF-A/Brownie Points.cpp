#include <iostream>
//10865 - Brownie Points
using namespace std;


int main()
{
    //freopen("j.txt", "r", stdin);
    int input[100000][2];
    int lines=0,i,s1=0,s2=0,thre[2],temp[2];
    while(scanf("%d",&lines) && lines ){
        s1=0,s2=0;
        for(i=0;i< lines/2;i++)
            scanf("%d %d",&input[i][0],&input[i][1]);

        scanf("%d %d",&thre[0],&thre[1]);


        for(i=0;i< lines/2;i++)
           if(  (input[i][0] > thre[0] && input[i][1] > thre[1]) || (input[i][0] < thre[0] && input[i][1] < thre[1]) )s1++;
           else if(  (input[i][0] > thre[0] && input[i][1] < thre[1]) || (input[i][0] < thre[0] && input[i][1] > thre[1]) ) s2++;

        for(i=0;i< lines/2;i++) {
            scanf("%d %d", &temp[0], &temp[1]);

            if((temp[0] > thre[0] && temp[1] > thre[1]) || (temp[0] < thre[0] && temp[1] < thre[1]) )s1++;
            else  if((temp[0] < thre[0] && temp[1] > thre[1]) || (temp[0] > thre[0] && temp[1] < thre[1]) ) s2++;
        }


        cout << s1<<" "<<s2<<endl;
    }


    return 0;
}


