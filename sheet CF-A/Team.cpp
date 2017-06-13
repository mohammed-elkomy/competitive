#include <iostream>

using namespace std;
//Team

int main() {
     int n,count=0; int input[3];
    cin >> n;
    while (n--) {
        scanf("%d %d %d", &input[0], &input[1], &input[2]);
        if(input[0]+input[1]+input[2] > 1) count++;
    }

    cout << count <<endl;
    return 0;
}
