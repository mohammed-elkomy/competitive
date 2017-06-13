#include <iostream>
#include <algorithm>
#include <string>


//Sum of Digits

using namespace std;



int main() {

    //freopen("j.txt", "r", stdin);
    string data;
    int sum = 0,i,cnt=0;
    cin >> data;


    while(data.length() >1) {
        cnt++;
        sum=0;
        for ( i = 0; data[i] != '\0' && ( sum += data[i] - '0'); i++);
        data =to_string(sum);
    }


    cout << cnt;
    return 0;
}