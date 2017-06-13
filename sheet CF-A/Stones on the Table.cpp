#include <iostream>

using namespace std;
//Stones on the Table

int main() {
    char inp[51];
    int cnt=0;
    scanf("%*d %s",inp);

    for (int i =0 ; inp[i] !=0; i++){
            if(inp[i]==inp[i+1]) cnt++;
    }
    cout << cnt<< endl;
    return 0;
}
