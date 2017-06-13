#include <iostream>
#include <cstring>
//freopen("j.txt", "r", stdin);
//


using namespace std;

int main()
{
    //freopen("j.txt", "r", stdin);
    int n,k,data[500],i;
    cin >> n>>k;

    for(i=0;i<2*n+1;i++)
        cin>>data[i];

    for(i=0;i<2*n+1;i++)
        if((i&1)&& k>0 && ((data[i]-1) >data[i-1] )&&( data[i+1]< (data[i]-1)))
            data[i]--,k--;;


    for(i=0;i<2*n+1;i++)
        cout<<data[i]<<(i!=2*n?" " :"\n");


    return 0;
}
