#include <iostream>
#include <cstring>
//freopen("j.txt", "r", stdin);
//A. Ksenia and Pan Scales

using namespace std;

int main()
{

    string s,s2;
    cin >>s;
    int found = s.find("|");
    int delta=(2*found-(int)s.length()+1);

    cin >>s2;
    if(s2.length()<abs(delta) || (s2.length()-abs(delta))%2)
        printf("Impossible\n");
    else {
        int i=0;
        if(delta<0)
            for(int j=0; j< -delta;j++)
                putchar(s2[i++]);

        for(int j=0; j< (s2.length()-abs(delta))/2 ;j++)
            putchar(s2[i++]);

        cout << s;

        for(int j=0; j< (s2.length()-abs(delta))/2 ;j++)
            putchar(s2[i++]);

        if(delta>0)
            for(int j=0; j< delta;j++)
                putchar(s2[i++]);
    }


    return 0;
}
