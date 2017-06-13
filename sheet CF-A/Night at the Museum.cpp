  #include <iostream>

using namespace std;
//Night at the Museum
char input[101];
int cost=0,temp;
int main() {
    cin >> input;

    temp=abs(input[0]-'a')%26;
    cost +=min (temp,26-temp) ;

    for(int i =1 ; input[i] !=0 ;i++)
        temp=abs(input[i]-input[i-1])%26,cost +=min (temp,26-temp);

    cout << cost;
    return 0;
}

