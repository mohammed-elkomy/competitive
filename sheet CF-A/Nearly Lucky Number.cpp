#include <iostream>

using namespace std;

//Nearly Lucky Number
char input[25];
int main() {
    int count =0;
    cin >> input;
    for(int i=0 ; input[i] !=0 ;i++)
        if(input[i] =='7' || input[i] =='4')
            count++;

    if(count==4 || count ==7)cout << "YES"<<endl;
   else  cout << "NO"<<endl;

    return  0;

}
