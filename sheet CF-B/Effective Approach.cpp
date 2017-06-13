#include <iostream>
#include <cstring>

//Effective Approach

using namespace std;

int main() {
    //freopen("j.txt", "r", stdin);
    int ocu[100005],n,m,i,temp;unsigned long long comF=0,comL=0;
    memset(ocu,-1,sizeof ocu);
    cin >>n;
    for(i=0 ; i < n ; i++)
    {
        scanf("%d",&temp);
        if(ocu[temp] == -1) ocu[temp] = i+1;
    }
    cin >>m;
    for(i=0 ; i < m ; i++)
        scanf("%d",&temp), comF +=ocu[temp],comL +=(n-ocu[temp]+1);

    printf("%llu %llu\n",comF,comL);

    return 0;
}

