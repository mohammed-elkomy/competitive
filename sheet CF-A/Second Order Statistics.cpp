
#include <iostream>

using namespace std;

//Second Order Statistics
int main() {
    int n ,arr[101],mini=105,i,out=105;
   cin >> n;
    for( i =0;i<n;i++)
        cin>>arr[i],mini=min(mini,arr[i]);

    for( i =0;i<n;i++)
        if(mini != arr[i])
            out=min(out,arr[i]);

    if(out !=105)  cout << out<<endl;
    else cout << "NO"<<endl;
    return 0;
}

