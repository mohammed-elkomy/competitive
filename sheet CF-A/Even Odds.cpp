
#include <iostream>

//A. Even Odds
using namespace std;
int main (){
    long long n,k;
    cin >> n >> k;

    k > (n/2+n%2)?cout << (k-(n/2+n%2))*2:cout <<k*2-1;
    return 0;
}
