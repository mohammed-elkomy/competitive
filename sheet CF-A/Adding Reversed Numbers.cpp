
#include <iostream>
#include <cstring>

using namespace std;
//713 - Adding Reversed Numbers

int main() {
    int t ,i,l1,l2;bool start;
    char s1[205],s2[205],res[205];
    cin >> t;
  while (t--){
      start =true;
    cin >>s1>>s2;
      l1=strlen(s1),l2=strlen(s2);
      for( i =0 ; i< 205 ;i++)
          i<l1 ?s1[i] -='0':s1[i]=0,i<l2 ?s2[i] -='0':s2[i]=0;

      res[0] = s1[0]+s2[0];

      for( i =1 ; i < max(l1,l2) ;i++)
          res[i] = s1[i]+s2[i]+res[i-1]/10,res[i-1] %=10;


      if(res[i-1] >9)
            res[i]=res[i-1]/10,res[i++-1] %=10;


      for(int j =0 ; j != i ;j++)
        if(!start || res[j] !=0 )
              printf("%d",(int)res[j]),start=false;

      printf("\n");
  }
    return 0;
}

