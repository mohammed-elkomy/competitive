#include <iostream>

using namespace std;
//Insomnia cure
bool drag[100005];
int cnt=0;
int main() {

    int k,l,m,n,d;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
    for(int i =1; i <= d ;i++)
        if( (i%k==0 || i%l==0  ||i%m==0 ||i%n==0 ) && !drag[i] )
            cnt++;

    cout << cnt<<endl;
    return 0;
}

