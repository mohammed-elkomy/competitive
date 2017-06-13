#include <vector>
#include <iostream>

using namespace std;
//Team Olympiad
int n ,i,temp,arr[3];
vector<int> inde[3];
int main() {

    scanf("%d",&n);
    for(i =0 ; i<n ; i++  )
        scanf("%d",&temp),arr[temp-1]++,inde[temp-1].push_back(i+1);

    temp =min(arr[0],min(arr[1],arr[2]));
    printf("%d\n",temp);

    for(i =0 ; i < temp;i++)
        cout << inde[0][i] << " "<<inde[1][i] << " "<<inde[2][i] << endl;

    return 0;
}

