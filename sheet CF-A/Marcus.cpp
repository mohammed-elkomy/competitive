#include <iostream>
#include <cstring>

#include <stack>

using namespace std;
//10452 - Marcus
char in[8][8],path[8]="IEHOVA#";
int m ,n,t,i,j,SI,SJ,DI,DJ,pnext=0;
bool v[8][8];
stack<string> s;
bool solve (int i,int j){
    v[i][j]=true;
    if(i==DI && j==DJ) return true;
    int save =pnext;
    if(i>0 && !v[i-1][j] && path[pnext++] == in[i-1][j] && solve(i-1,j) )
        s.push("forth");//f
    pnext=save;
    if(j>0&& !v[i][j-1] && path[pnext++] == in[i][j-1] && solve(i,j-1) )
        s.push("left");//l
    pnext=save;
    if(j<n-1&& !v[i][j+1] && path[pnext++] == in[i][j+1] &&solve(i,j+1) )
        s.push("right");//r

    return  true;
}
int main (){
    //freopen("j.txt", "r", stdin);
    //freopen("jj.txt", "w", stdout);
    scanf("%d",&t);
    while (t--){
        scanf("%d %d",&m,&n);
        for(i=0 ,j=0; i < m && scanf("%c",&in[i][j]) ;i++)
            for(j=0 ; j < n ;j++)
            {
                scanf("%c",&in[i][j]);

                if(in[i][j] =='@')
                    SI=i,SJ=j;
                else if(in[i][j] == '#')
                    DI=i,DJ=j;
            }
        solve(SI,SJ);

        do {
            cout << s.top();
            s.pop();
        }
        while (!s.empty() && cout << " ");
        cout <<endl;
        memset(v,0,sizeof v) , pnext=0;
    }
    return 0;
}

