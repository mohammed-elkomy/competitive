#include <iostream>

using namespace std;

//Anton and Letters
char input[1002];
bool rep[26];
int main() {
    int i ,count=0;
    cin.getline(input,1002);
    for(i =0 ; input[i] !=0; i++)
        if(input[i] >96 && input[i]<123)
            rep[input[i]-'a']=true;

    for(i = 0 ; i < 26 ;i++)
        if(rep[i])count++;

    cout << count << endl;
    return  0;
}

