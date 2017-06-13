#include <iostream>
#include <algorithm>



//Burglar and Matches

using namespace std;


bool cmp (pair<int,int> i,pair<int,int> j) {
    return i.second > j.second;
}

int main() {
    //freopen("j.txt", "r", stdin);

    int n,m,i;unsigned long long val=0;
    pair<int,int> data[22];
    scanf("%d %d",&n,&m);
    for( i=0 ;i < m &&scanf("%d %d",&data[i].first,&data[i].second) ;i++);

    sort(data, data+m,cmp);

    i=0;
    while(n && i < m)
        if(data[i].first <= n)
            n -=data[i].first, val +=data[i].first*data[i++].second;
        else
            val +=n*data[i++].second,n=0;

    printf("%llu\n",val);

    return 0;
}
