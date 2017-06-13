
#include <iostream>
#include <algorithm>

using namespace std;
//A. Buy a Shovel
int n ,m,i;

int main() {
    scanf("%d %d",&n,&m);

    for( i =1 ;  i< 10 && ( i*n%10 !=0 && i*n%10 !=m ); i++);
           cout <<i<<endl;
    return 0;
}



