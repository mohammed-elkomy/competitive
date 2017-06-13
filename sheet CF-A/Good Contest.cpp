
#include <iostream>

using namespace std;

//A Good Contest
int main() {
    string s;int a,b,n;
    cin >> n;
    while (n--){
        cin >> s>> a >> b;
        if(a > 2399 && b > a){
            cout <<"YES"<<endl;   return  0;
        }

    }
    cout <<"NO"<<endl;
    return  0;
}
