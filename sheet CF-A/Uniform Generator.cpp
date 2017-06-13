#include <iostream>
#include <cstring>

using namespace std;
//408	Uniform Generator

int gcd(int x,int y){
if(y==0) return x;
    return gcd(y, x % y);
}

int main() {
   int s,m;
    while (cin >> s >> m){
                 printf("%10d%10d    %s\n\n",s,m,gcd(s,m)== 1?"Good Choice":"Bad Choice");
    }
    return 0;
}

