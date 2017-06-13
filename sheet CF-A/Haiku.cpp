


#include <iostream>

//A. Haiku
using namespace std;
int main (){
    int iter ,i,cnt,len [3]={5,7,5}; char line[105];

    for (iter =0 ; iter < 3 ;iter++){
        cnt=0;
        cin.getline(line,105);
        for( i =0 ; 0 != line[i] ;i++)
            if(line[i]=='a' ||line[i]=='e' ||line[i]=='i' ||line[i]=='o' ||line[i]=='u') cnt++;

        if(cnt != len [iter]) {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
