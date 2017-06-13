#include <iostream>
#include <cstring>
//A. Good Number
using namespace std;

int n,k,c,i,j;
bool digs[10];
string s;
int main()
{
    cin >> n>>k;
    for( i =0 ; i < n ; i++) {
        memset(digs,0,sizeof digs);
        cin >> s;

        for( j =0 ; j < s.length() ; j++)
            digs[s[j]-'0'] = true;

        for( j =0 ; j <= k && digs[j]; j++);

        if(j==k+1)
            c++;
    }

    cout << c;

    return 0;
}


