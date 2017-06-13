#include <iostream>




//Big Mod
using namespace std;

int POWMOD(int b,int p,int m){
    if(b ==0) return 0;
    if(p ==0) return 1;

    int sq=POWMOD(b,p/2,m);
    sq=(sq%m*sq%m)%m;
    if(p%2==1) sq =(sq%m*b%m)%m;

    return sq;
}




int main() {
    //freopen("j.txt", "r", stdin);
    int B,P,M;
    while (scanf("%d %d %d", &B,&P,&M) !=EOF )
        printf("%d\n",POWMOD(B%M,P,M));


    return 0;
}

