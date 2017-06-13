#include <iostream>
#include <cstring>


//Bear and Finding Criminals

using namespace std;


int main() {
    //freopen("j.txt", "r", stdin);
    int n,a,i,j,cnt=0;
    bool data[102];
    cin >> n >> a;
    for(i =0 ; i < n&&cin >> data[i] ;i++);

    for(i =a-1,j=a-1 ; i < n ||  j >= 0 ;i++,j--)
        if( j >= 0 && i < n && data[j] && data[j]==data[i])
            (i==j? cnt++:cnt += 2);
        else  if( j >= 0 && i >= n && data[j])
            cnt++;
        else if (i < n && j < 0 && data[i] )
            cnt++;


    cout << cnt<<endl;


    return 0;
}