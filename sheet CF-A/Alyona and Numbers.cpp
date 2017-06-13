#include <iostream>
#include <cstring>
//freopen("j.txt", "r", stdin);
//A. Alyona and Numbers


using namespace std;
unsigned  long long n,m,cn,cm,rn,rm;

int main()
{
    cin>> n>>m;
    cn = n/5,cm=m/5,rn=n%5,rm=m%5;


    cout <<(cn)*(cm)+
           (cn+(rn>0))*(cm+(rm>3))+
           (cn+(rn>3))*(cm+(rm>0))+

           (cn+(rn>1))*(cm+(rm>2))+
           (cn+(rn>2))*(cm+(rm>1));


    return 0;
}


