#include <iostream>

using namespace std;

int gcd(int x,int y){
    if(y==0) return x;
    return gcd(y, x % y);
}

//Die Roll
int main() {
    int x,y;
    cin >> x >> y;
    int pos=6-max(x,y)+1;
    int gCd=gcd(pos,6);
    cout <<pos/gCd<<"/"<<6/gCd<<endl;
    return 0;
}

