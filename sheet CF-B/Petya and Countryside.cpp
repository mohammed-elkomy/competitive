#include <iostream>
#include <cstring>



using namespace std;


int main() {
    //freopen("j.txt", "r", stdin);
    int n,i, data[1001],maxi=-1,j,cnt=0;

    cin>> n;
    for( i =0 ; i < n && cin>> data[i];i++);

    for( i =0 ; i < n ;i++,cnt=0){
        for( j =i ; j < n-1 && data[j] >= data[j+1] && ++cnt  ;j++);
        for( j =i ; j > 0 && data[j] >= data[j-1]&& ++cnt ;j--);
        maxi=max(maxi,cnt);
    };


    cout << maxi+1;
    return 0;
}