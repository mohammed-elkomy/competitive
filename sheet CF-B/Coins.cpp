#include <iostream>

//Coins

using namespace std;

int main() {

    //freopen("j.txt", "r", stdin);
    bool impos=false;
    char data[3][3];
    cin >> data[0] >> data[1] >> data[2];
    int vals[3] = {-1, -1, -1};

    if (data[0][1] == '>')vals[data[0][0] - 'A'] = 100, vals[data[0][2] - 'A'] = 99;
    else vals[data[0][0] - 'A'] = 99, vals[data[0][2] - 'A'] = 100;

    if (data[1][1] == '>')
        vals[data[1][0] - 'A'] == -1 ? vals[data[1][0] - 'A']= vals[data[1][2] - 'A']+1 : vals[data[1][2] - 'A']= vals[data[1][0] - 'A']-1 ;
    else
        vals[data[1][0] - 'A'] == -1 ? vals[data[1][0] - 'A']= vals[data[1][2] - 'A']-1 : vals[data[1][2] - 'A']= vals[data[1][0] - 'A']+1 ;

    if(vals[0]==vals[1])   vals[0]=vals[1] = (vals[2] == 99 ?200:50);
    else if (vals[0]==vals[2]) vals[0]=vals[2] = (vals[1] == 99 ?200:50);
    else if (vals[1]==vals[2]) vals[1]=vals[2] =(vals[0] == 99 ?200:50);


    if (data[2][1] == '>')
    { if(vals[data[2][0] - 'A'] == vals[data[2][2] - 'A'])
           vals[data[2][0] - 'A']++;
       else if (vals[data[2][0] - 'A'] < vals[data[2][2] - 'A'])
            impos=true;
    }
    else
    {
       if(vals[data[2][0] - 'A'] == vals[data[2][2] - 'A'])
           vals[data[2][0] - 'A']--;
       else if (vals[data[2][0] - 'A'] > vals[data[2][2] - 'A'])
           impos=true;
    }
    if(impos)
        printf("Impossible\n");
    else
    {
        if(vals[0] < vals[1] && vals[0] < vals[2])
            putchar('A'),vals[1]<vals[2]? printf("BC\n"):printf("CB\n");

        else if(vals[1] < vals[0] && vals[1] < vals[2])
            putchar('B'), vals[0]<vals[2]? printf("AC\n"):printf("CA\n");

        else  if(vals[2] < vals[1] && vals[2] < vals[0])
            putchar('C'), vals[0]<vals[1]? printf("AB\n"):printf("BA\n");

    }
    return 0;
}

