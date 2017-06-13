

#include <stdio.h>
//Pangram
int count[26];
char inp[101];
int main() {
    scanf("%*d %s",inp);
    for(int i =0 ; inp[i] !=0 ; i++  )
        count[(inp[i]>='a' &&inp[i]<='z' ?inp[i]-'a':inp[i]-'A')]++;


    for(int i =0 ; i < 26  ; i++  )
      if(count[i] == 0){ printf("NO\n"); return 0;}

    printf("YES\n");
    return 0;
}

