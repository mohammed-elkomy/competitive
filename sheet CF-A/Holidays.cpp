
#include <iostream>

//A. Holidays
using namespace std;
int main (){
    int n,base;
    cin >> n;
    base =(n/7)*2;
    n =n%7;
    printf("%d %d\n", base+((n==6)?1:0),base+((n>1)?2:n));
}


