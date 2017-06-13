#include <iostream>
#include <map>

//A. Restoring Password
using namespace std;
string dat;
string temp;
int i ;
int main()
{
    cin >> dat;
    map<string,int> mymap;
    for (i =0 ; i <  10 ; i++)
        cin>>temp,mymap.insert ( std::pair<string,int>(temp,i));

    for (i =0 ; i <  8 ; i++)
        cout << mymap[dat.substr(i*10,10)];
    cout <<endl;

    return 0;
}

