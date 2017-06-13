#include <iostream>
#include <cstring>

//A. Dice Tower
using namespace std;


int main()
{
    //freopen("j.txt", "r", stdin);

    int n,top,temp1,temp2,i,topCom,j;
    bool seen[7],ISNO=false;

    cin >> n>>top;
    cin >> temp1 >> temp2;

    topCom=7-top;
    for(i=0; i < n ; i++) {
        memset(seen,0,sizeof seen);
        if(ISNO) { printf("NO\n");return 0; }

        cin >> temp1 >> temp2;
        seen[temp1]=seen[temp2]=seen[7-temp1]=seen[7-temp2]=true;

        ISNO=true;
        for(j=1;j<7;j++)
            if(!seen[j] && j == topCom) ISNO=false,topCom=7-topCom;



    }

    printf("YES\n");
    return 0;
}


