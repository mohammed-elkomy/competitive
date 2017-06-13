


#include <iostream>

//Toy Cars
using namespace std;
int n,i,j,temp,cnt;bool arr[100];
int main() {
    cin >> n;
    for(i=0 ; i<n;i++ )
        for(j=0 ; j<n;j++ )
        {
            scanf("%d",&temp);
            if(j<i)
                switch (temp){
                    case 1:
                        arr[i]=1;
                        break;
                    case 2:
                        arr[j]=1;
                        break;
                    case 3:
                        arr[j]=arr[i]=1;
                        break;
                    default:
                        break;
                }

        }

    for(i =0 ; i < n ;i++)
        if(arr[i]==0)cnt++;

    printf("%d\n",cnt);

    for(i =0 ; i < n ;i++){
        if(arr[i]==0)
            printf("%d ",i+1);
    }
}


