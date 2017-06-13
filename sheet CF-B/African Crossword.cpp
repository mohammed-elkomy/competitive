#include <iostream>
#include <cstring>


//B - African Crossword

using namespace std;


int main() {
    //freopen("j.txt", "r", stdin);
    char data[101][101];
    bool print[101][101];
    memset(print,1,sizeof print);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> data[i];
        for (int j = 0; j < m; j++)
            for (int k = j+1; k < m; k++)
                if(data[i][j]==data[i][k])
                    print[i][j]=print[i][k]=false;
    }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            for (int k = j+1; k < n; k++)
                if(data[j][i]==data[k][i])
                    print[j][i]=print[k][i]=false;


    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if(print[i][j]) putchar(data[i][j]);

    return 0;
}
