
#include <stdio.h>
#include <windef.h>

///Soft Drinking
int main() {
    int n,k,l,c,d,p,nl,np;
    scanf("%d %d %d %d %d %d %d %d",  &n,&k,&l,&c,&d,&p,&nl,&np) ;

    printf("%d\n",((min(k*l/nl,min(c*d,p/np)))/n));
    return 0;
}
