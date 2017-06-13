
#include <iostream>


using namespace std;
//A. Amusing Joke
int count[26],i;
char line[105];
int main() {
    cin >> line;
    for(i=0 ; line[i] !=0 ; i++)count[line[i]-'A']++;
    cin >> line;
    for(i=0 ; line[i] !=0 ; i++)count[line[i]-'A']++;
    cin >> line;
    for(i=0 ; line[i] !=0 ; i++)count[line[i]-'A']--;

    for(i=0 ; i < 26 ; i++)
        if (count[i])  { cout <<"NO\n"; return 0; }
    cout <<"YES\n";
    return 0;
}

