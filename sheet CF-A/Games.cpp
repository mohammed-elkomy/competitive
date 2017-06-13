#include <iostream>
#include <algorithm>

using namespace std;
//A. Games
int n,dat0[30],dat1[30] ,res=0;
pair<int *, int *> cnt;

int main() {
    scanf("%d ",&n);
    for(int i =0 ;  i< n; i++)
        scanf("%d %d", &dat0[i] ,&dat1[i]);

   sort(dat1,dat1+n);

    for(int i =0 ;  i< n; i++)
        cnt = equal_range(dat1, dat1 + n, dat0[i]),res +=cnt.second-cnt.first;

    cout << res<<endl;
    return 0;
}

