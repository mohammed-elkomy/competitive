#include <iostream>

#include <cmath>


//Pi
using namespace std;

int gcd(int a ,int b){
    if(b == 0) return a;
    return gcd(b,a%b);
}


int main() {
    //freopen("j.txt", "r", stdin);


    int n,data[51],i,j;

    while (scanf("%d", &n) && (n )) {
        int pairs=0,total=0;
        for(i=0;i<n;i++)
             scanf("%d", &data[i]);

        for(i=0 ; i < n;i++)
            for(j=i+1 ; j < n;j++)
                if(++total&&gcd(data[i],data[j])==1) pairs++;


        if(pairs==0)
            puts("No estimate for this data set.");
        else
            printf("%.6f\n",sqrt(total*6.0/pairs));


    }

    return 0;
}

