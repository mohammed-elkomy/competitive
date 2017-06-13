#include <stdio.h>
//Coder
int main() {
    int n;
    scanf("%d",  &n) ;
    printf("%d\n",((n*n)>>1 )+((n*n) &1) );

    for(int i=0 ; i < n;i++){
        for(int j=0 ; j < n;j++){
            if((!(j&1) && !(i&1)) || ((j&1) && (i&1)) )printf("C");
            else printf(".");
        }
        printf("\n");
    }
    return 0;
}

