#include <iostream>

using namespace std;
//Colorful Stones (Simplified Edition)
int main() {
    char s[51],t[51];int count=0;
    cin >> s >> t;
    for(int i =0 ; t[i] !=0;i++ )
        if(t[i]==s[count])count++;
    cout << count+1 <<endl;
    return 0;
}
