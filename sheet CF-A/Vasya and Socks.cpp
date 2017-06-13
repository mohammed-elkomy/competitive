
#include <iostream>

using namespace std;

int main() {
    //A. Vasya and Socks
    int m,v,op=0;

    cin >> v >> m;
    while (v >= m )
    op +=v-v%m,v =v/m+v%m;
    cout << op+v;
    return 0;

}
