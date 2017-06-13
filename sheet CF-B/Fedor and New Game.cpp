#include <iostream>
//Fedor and New Game
using namespace std;

int main() {


    int n,m,k,data[1002],i,cnt=0;
    scanf("%d %d %d",&n,&m,&k);

    for( i=0 ; i <= m && scanf("%d",&data[i]) ;i++);

    for( i=0 ; i < m  ;i++)
       if(__builtin_popcount(data[i]^data[m]) <= k)
           cnt++;

    printf("%d\n",cnt);

    return 0;
}

