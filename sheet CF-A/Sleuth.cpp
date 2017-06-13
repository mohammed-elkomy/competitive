
#include <iostream>
#include <cstring>

using namespace std;
//A. Sleuth
char c[200];
int main() {
    scanf("%[^?]s",c);
    int l= strlen(c);
    int i;
    for(i=l-1 ; i>-1 &&( c[i] ==' ' || c[i] =='\t' ) ;i--);

            c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='y'||
            c[i]=='A'|| c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'||c[i]=='Y'?printf("YES\n"):printf("NO\n");

    return 0;
}
