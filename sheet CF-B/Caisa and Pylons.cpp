#include <iostream>
#include <algorithm>



//Caisa and Pylons

using namespace std;


int main() {
    //freopen("j.txt", "r", stdin);
    int n,last=0,now,i;long long energy=0,cost=0;
    scanf("%d ",&n);

    for(i=0; i < n;i++) {
        scanf("%d", &now);
        energy +=last-now;
        if(energy < 0) cost -=energy,energy=0;
        last=now;
    }

    cout << cost;
    return 0;
}