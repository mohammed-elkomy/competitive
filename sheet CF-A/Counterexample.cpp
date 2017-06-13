#include <iostream>
//A. Counterexample
using namespace std;

unsigned long long gcd(unsigned long long a,unsigned long long b){
    if(b==0)
        return  a;

    return gcd(b,a%b);
}

int main()
{
    unsigned long long r,l;
    cin >> r>>l;

    for (unsigned long long  a=r ; a <= l;a++)
        for (unsigned long long  b=a+1 ; b <= l;b++)
            for (unsigned long long  c=b+1 ; c <= l;c++)
                if(gcd(a,b)==1 &&gcd(b,c)==1 && gcd(a,c) !=1)
                {
                    printf("%llu %llu %llu\n",a,b,c);
                    return 0;
                }

    printf("%d\n",-1);


    return 0;
}


