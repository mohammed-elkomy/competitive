
#include <iostream>
//460 - Overlapping Rectangles
using namespace std;

int main()
{
   int t,a[4],b[4],i;
    cin >> t ;
    while (t--){
    for(i=0 ; i < 4 ;i++)
        scanf("%d",&a[i]);

    for(i=0 ; i < 4 ;i++)
        scanf("%d",&b[i]);

    if(b[1] >= a[3] || b[3] <= a[1] || b[0] >= a[2] || b[2] <= a[0]   )
        cout << "No Overlap" <<(t?"\n\n":"\n") ;
    else
        cout << max (a[0],b[0]) <<" "<< max (a[1],b[1]) <<" "<< min (a[2],b[2]) <<" "<< min (a[3],b[3])<<(t?"\n\n":"\n") ;

    }
    return 0;
}

