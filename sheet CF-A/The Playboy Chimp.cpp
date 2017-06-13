#include <iostream>
#include <algorithm>

//The Playboy Chimp

using namespace std;


int main()
{
    //freopen("j.txt", "r", stdin);

    int n,q,i,temp,data[200006];
    scanf("%d",&n);
    for(i =0 ; i < n;i++)
        scanf("%d",&data[i]);

    scanf("%d",&q);
    for(i =0 ; i < q;i++) {
        scanf("%d", &temp);
        pair<int *, int *> val=equal_range  (data, data + n, temp);

        cout << *(val.first-1);
        if(temp > data[0] )
            cout << *(val.first-1);
        else  putchar('X');

        putchar(' ');
        if(temp < data[n-1])
            cout << *val.second;
        else  putchar('X');
        putchar('\n');


    }
    return 0;
}
