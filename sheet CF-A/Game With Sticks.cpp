#include <iostream>

using namespace std;
int n,m;bool v=true;

int main() {
    //A. Game With Sticks
    //freopen("j.txt", "r", stdin);
    cin >> n >> m;
    if(n ==0 || m==0 ) {
        cout << "Akshat\n";
        return 0;
    }
    while((v = !v,m--) && n-- );
    v ?cout << "Akshat\n":cout << "Malvika\n";
    return 0;

}
