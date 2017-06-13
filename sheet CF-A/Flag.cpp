#include <iostream>

using namespace std;
//Flag

int main() {
    int n ,m,i,j;char temp,memoryRow='A',memoryCOL='A';
    scanf("%d %d ",&n,&m);
    for( i =0; i < n ;memoryCOL='A',memoryRow=temp,i++)
        for( j =0; j < m ;memoryCOL=temp, j++)
        {    while (scanf("%c",&temp) && !isalnum(temp) );
            if(temp == memoryRow || (temp != memoryCOL && memoryCOL !='A') ) {printf("NO\n");return 0;}
        }
    printf("YES\n");
    return 0;
}

