
#include <stdio.h>
//A. Lineland Mail
int in[100005],n,i;
long long min(long long x,long long y){ return  x>y?y:x; }
long long max(long long x,long long y){ return  x<y?y:x; }
long long abs(long long x){return x>0?x:-x; }
int main() {
    scanf("%d",&n);
    for(i=0 ; i < n; i++)scanf("%d",&in[i]);

    for(i=0 ; i < n; i++)
        printf("%lli %lli\n",min(abs(in[i]-(i>0?in[i-1]:1e15L)),abs(in[i]-(i<n-1?in[i+1]:1e15L))),max(abs(in[i]-in[0]),abs(in[i]-in[n-1])));

    return 0;
}

