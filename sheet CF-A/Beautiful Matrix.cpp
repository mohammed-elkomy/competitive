
#include <iostream>

using namespace std;
//Beautiful Matrix

int main() {
    int temp=0,i;
   for ( i =0 ; i < 25   ;i++){
       cin >> temp;
       if(temp) {
           cout << abs(2-i/5)+abs(2-i%5)<<endl;
           return 0;
       }
   }
    return 0;
}
