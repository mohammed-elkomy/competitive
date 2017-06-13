#include <iostream>
#include <algorithm>

//Interesting drink
using namespace std;

int main() {
    //freopen("j.txt", "r", stdin);
    int n,m,data[100005],i,temp;
    scanf("%d",&n);
    for(i=0 ; i < n &&  scanf("%d",&data[i]) ; i ++);
    sort(data,data+n);

    scanf("%d",&m);
    for(i=0 ; i < m &&  scanf("%d",&temp) ; i ++)
        printf("%lu\n",upper_bound (data ,data+n, temp)-data);

    return 0;
}