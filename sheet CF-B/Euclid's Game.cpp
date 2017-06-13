#include <iostream>


//Euclid's Game

using namespace std;

/*
unsigned long long gcd(unsigned long long a ,unsigned long long b,bool turn){
    if(b==0)
        return turn;

    return gcd(b,a%b,!turn);
}
*/
bool find(int n, int m) {
    if (n < m) swap(n, m);
    cout << n << ","<<m<<endl;
    if (m == 0) return false;
    if (n % m == 0) return true;
    int next = (n / m) * m;
    bool f = find(n - next, m);
    cout << f << " f"<<endl;
    //printf("find %d %d: %d\n", n - next, m, f);
    if (!f) return true;
    return   m < next;
}


int main() {
    //freopen("j.txt", "r", stdin);
    int n, m;
    while (scanf("%d %d", &n, &m) && (n | m)) {
        if (find(n, m)) puts("Stan wins");
        else puts("Ollie wins");
    }

    return 0;
}

