#include <iostream>

using namespace std;
//Police Recruits

int main() {
    int n ,temp,prin=0,val=0;
    cin >> n;
    for(int i =0 ; i <n ; i++)
        cin >> temp,val +=temp,prin=min(val,prin);
    printf ("%d\n",-prin);
    return 0;
}
