#include <iostream>
#include <algorithm>

//Megacity
using namespace std;
struct entry {
    int x, y, val;
};

bool cmp(entry e1, entry e2) { return e1.x * e1.x + e1.y * e1.y < e2.x * e2.x + e2.y * e2.y; }

int main() {
    int n, sum, i;
    entry data[1001];
    scanf("%d %d", &n, &sum);

    for (i = 0; i < n && scanf("%d %d %d", &data[i].x, &data[i].y, &data[i].val); i++);
    sort(data, data + n, cmp);


    for (i = 0; i < n; i++) {
        sum += data[i].val;
        if (sum >= 1000000) {
            printf("%.7f", sqrt(data[i].x * data[i].x + data[i].y * data[i].y));
            return 0;
        }
    }

    puts("-1");
    return 0;
}