#include <iostream>
#include <cstring>
//A - Launch of Collider

using namespace std;

int main()
{
    //freopen("j.txt", "r", stdin);
    char dir[200005];int n,i,temp, time=1<<31-1,lastRloc=-1;
    cin >>n>>dir;

    for( i =0 ; i < n ; i++) {
        cin >> temp;
        if(dir[i]=='L' && lastRloc != -1)
            time = min(time,(temp-lastRloc)/2),lastRloc=-1;
        else if(dir[i]=='R')
            lastRloc=temp;
    }
    cout << (time==1<<31-1?-1:time);
    return 0;
}
