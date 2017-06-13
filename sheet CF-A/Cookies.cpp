
#include <iostream>
using namespace std;
//A. Cookies
int n ,i,even=0,odd=0,temp;

int main() {
    scanf("%d",&n);

    for( i =0 ;  i< n ; i++)
       scanf("%d",&temp),temp &1 ? odd++:even++;


    if(odd &1)  printf("%d\n",odd);
else printf("%d\n",even);
    return 0;
}

