#include <iostream>
#include <cstring>


//Cows and Poker Game

using namespace std;



int main() {
    //freopen("j.txt", "r", stdin);
    int n ,i,A=0,F=0,I=0,cnt=0;
    char data[200005];
    cin>> n>>data;

    for( i =0 ; i < n ;i++)
        data[i]=='A' ?A++: (data[i]=='F' ?F++:I++);

        if(!I)
            cnt=A;
        else if(I==1)
            cnt=1;

    cout <<cnt<<endl;
    return 0;
}
