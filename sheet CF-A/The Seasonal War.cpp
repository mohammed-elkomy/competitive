

#include <iostream>
#include <cstring>
using namespace std;
char in[26][26];bool v[26][26]; int n, t=0,i,j,cnt ;
bool solve (int i,int j){
    if(i < 0 ||i > n-1||j < 0 || j>n-1 ||v[i][j])
        return false;
    v[i][j]=true;

    if(in[i][j] =='0' )
        return false;

    solve(i-1,j-1), solve(i-1,j),  solve(i-1,j+1),
    solve(i,j-1)   ,              solve(i,j+1),
    solve(i+1,j-1),  solve(i+1,j) ,solve(i+1,j+1);

    return true;
}
int main(){
    //The Seasonal War

    //freopen("j.txt", "r", stdin);
    while(scanf("%d",&n)!=EOF){
        memset(v,0,sizeof v);
        cnt=0;
        for(i=0 ; i<n;i++)
            cin >> in[i];
        for(i=0 ; i<n;i++)
            for(j=0 ; j<n;j++)
                cnt += solve(i,j);
        printf("Image number %d contains %d war eagles.\n",++t,cnt);
    }
    return 0;
}
