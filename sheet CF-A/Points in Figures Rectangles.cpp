#include <iostream>
//476 - Points in Figures: Rectangles
using namespace std;


int main()
{
    double rects[11][4],x,y;
    char c;int i=0,p=0,j;
    bool found;
    //freopen("j.txt", "r", stdin);
    //freopen("jj.txt", "w", stdout);

    while(scanf("%c",&c) && c != '*'){
        if(c !='\n')
            cin >> rects[i][0] >> rects[i][1] >> rects[i][2] >> rects[i][3],i++;

    }


    while (cin >> x>> y) {
        if(x ==9999.9)
            break;
        found=false;
        for (j = 0; j < i; j++)
            if(x > rects[j][0] && x < rects[j][2] && y > rects[j][3] && y < rects[j][1] ) {
                printf("Point %d is contained in figure %d\n",p+1,j+1);
                found=true;
            }

        if(!found)
             printf("Point %d is not contained in any figure\n",p+1);

        p++;
    }

    return 0;
}


