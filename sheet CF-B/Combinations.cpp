#include <iostream>
#include <vector>


//Combinations
using namespace std;

unsigned  long long  pow( unsigned  long long  b, int p) {         // O(log(p) base 2)
    if(p == 0)  return 1;
    unsigned  long long  sq = pow(b, p/2);
    sq = sq*sq;

    if(p%2 == 1)
        sq = sq*b;

    return sq;
}

vector<int> fact(int n) {
    vector<int> factors(102,0);
    int count,i,j,num;
    for (i = 2; i <= n ; i++)
        for (j = 2,num=i; j <= i ; j++) {
            count = 0;
            while (!(num % j)) count++, num /= j;
            factors[j] +=count;
        }

    return factors;
}

int main() {
    //freopen("j.txt", "r", stdin);

    int n, m;
    unsigned  long long val=0;
    while (scanf("%d %d", &n, &m) && (n | m)) {
        vector<int> nf= fact(n),mf= fact(m),nmf= fact(n-m);
        val=1;
        for(int i =2 ; i < 101;i++)
            val *= pow(i,(nf[i]-mf[i]-nmf[i]));

        printf("%d things taken %d at a time is %llu exactly.\n",n,m,val);
    }

    return 0;
}

