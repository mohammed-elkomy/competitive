


#include <iostream>
//A. Restoring Password
using namespace std;

int main()
{
   int data[101],dif,i,n,j,maxi,mini=1000000000;
   cin >> n;
   for(i =0 ; i < n ;i++) scanf("%d",&data[i]);

    for(i =1 ; i < n-1 ;i++){ //0 >> n-3
        maxi=-100000000;
        for(j=0;j< n-1;j++)
        {
            if(j == i)
                dif=-1;
            else if(j+1 == i )
                dif=data[j+2]-data[j];
            else dif=data[j+1]-data[j];
            maxi=max(dif,maxi);
        }
        mini=min(mini,maxi);
    }
    cout << mini << endl;
    return 0;
}
