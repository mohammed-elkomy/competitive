#include <iostream>
using namespace std;

//Vanya and Fence
int main() {

    int n ,h,temp,res=0;
   scanf("%d %d",&n,&h);
    for(int i =0 ;  i< n; i++)
        scanf("%d", &temp),temp>h?res +=2:res++;

    cout << res<<endl;
    return 0;
}


