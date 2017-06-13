#include <iostream>
using namespace std;
//To Carry or not to Carry

int main() {
    int x,y;
    while(cin >> x >> y){
        cout << (x ^ y)<<endl;
    }
    return 0;
}


