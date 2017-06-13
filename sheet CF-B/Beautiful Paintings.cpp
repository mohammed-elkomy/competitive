#include <iostream>
//Beautiful Paintings
using namespace std;
int data[1002];
int main() {

    //freopen("j.txt", "r", stdin);
    int n,cnt=0,i,temp,sub;
    scanf("%d ",&n);
    for( i=0 ; i < n && scanf("%d",&temp)   ;i++)data[temp]++;


    while(true){
        sub=0;
        for( i=1 ; i <= 1000   ;i++)
            if(data[i] > 0)
                data[i]--,sub++;
        cnt +=(sub?sub-1:0) ;
        if(sub < 2)break;
    }
    printf("%d\n",cnt);
    return 0;
}

