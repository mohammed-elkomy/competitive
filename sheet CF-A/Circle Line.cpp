#include <stdio.h>
//Circle Line
int main() {
    int n,arr[105],s,d,path1=0,path2=0,i;
    scanf("%d",  &n) ; for(i=0 ; i < n;i++) scanf("%d",  &arr[i]); scanf("%d %d", &s,&d) ;
    s--,d--; if(s>d){i=s;s=d;d=i;}
    for( i=s ; i < d;i++)
        path1 +=arr[i];

    for( i=d ; i != s ;i =++i % n)
        path2 +=arr[i];

    printf("%d\n",(path1>path2?path2:path1));
    return 0;
}
