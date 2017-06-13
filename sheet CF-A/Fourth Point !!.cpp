#include <iostream>
//10242 - Fourth Point !!
using namespace std;


int main()
{
    double para[4][2],ax=0,bx=0,cx=0,ay=0,by=0,cy=0;
    //freopen("j.txt", "r", stdin);
    while(cin >> para[0][0]>>para[0][1] >> para[1][0]>>para[1][1] >> para[2][0]>>para[2][1] >> para[3][0]>>para[3][1])
    {
        if((para[3][0] ==para[0][0] && para[3][1]== para[0][1]) )
        {
            ax =para[1][0],ay =para[1][1],bx =-para[0][0],by =-para[0][1],cx =para[2][0],cy =para[2][1];
        }
        else if((para[2][0] ==para[0][0] && para[2][1]== para[0][1])){
            ax =para[1][0],ay =para[1][1],bx =-para[0][0],by =-para[0][1],cx =para[3][0],cy =para[3][1];
        }else if((para[3][0] ==para[1][0] && para[3][1]== para[1][1]) )
        {
            ax =para[2][0],ay =para[2][1],bx =-para[1][0],by =-para[1][1],cx =para[0][0],cy =para[0][1];
        }
        else if((para[2][0] ==para[1][0] && para[2][1]== para[1][1])) {

            ax =para[3][0],ay =para[3][1],bx =-para[1][0],by =-para[1][1],cx =para[0][0],cy =para[0][1];
        }

        //cout << ax+bx+cx<<" "<<ay+by+cy<<endl;
        printf("%.3f %.3f\n",ax+bx+cx,ay+by+cy);

    }
    return 0;
}


