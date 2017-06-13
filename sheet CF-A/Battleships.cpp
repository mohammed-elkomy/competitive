#include <iostream>
#include <cstring>
using namespace std;
//11953 - Battleships
int t,i,n,j,cnt,tc ;char in[101][101];bool v[101][101];
bool solve (int i,int j){
    if(v[i][j])
        return false;
    v[i][j]=true;

    if(in[i][j] =='.' )
        return false;

    if((i>0 && solve(i-1,j)) || (i<n-1  && solve(i+1,j) ) ||  (j>0  && solve(i,j-1) ) || (j<n-1 && solve(i,j+1) ))
        return true;

    return in[i][j] =='x';
}
int main(){
    scanf("%d",&tc);
    for(t=0 ; t < tc ; t++){
        memset(v,0,sizeof v);
        cnt=0;
        scanf("%d",&n);
        for(i=0 ; i<n;i++)
            cin >> in[i];
        for(i=0 ; i<n;i++)
            for(j=0 ; j<n;j++)
               cnt += solve(i,j);
        printf("Case %d: %d\n",t+1,cnt);
    }
    return 0;
}

