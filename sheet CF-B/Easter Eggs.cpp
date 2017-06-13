#include <iostream>


//Easter Eggs

using namespace std;

int main() {
    //freopen("j.txt", "r", stdin);
    char c []= "ROYGBIV";
    // 3 4 5 6

    int n,i;
    cin >> n;

    for(i=0; i < n/7;i++) printf("%s",c);
    for(i=0; i < n%7;i++) putchar(c[i%4+3]);
    putchar('\n');

    return 0;
}

