#include <iostream>

using namespace std;
//A. Anton and Danik
char input[100001];int l,A;
int main() {

    scanf("%d %s",&l,input);
    for(int i =0 ; i < l ;i++)
        if(input[i]=='A') A++;

    if(2*A > l) printf("Anton\n");
    else if(2*A < l) printf("Danik\n");
    else printf("Friendship\n");

    return 0;
}
