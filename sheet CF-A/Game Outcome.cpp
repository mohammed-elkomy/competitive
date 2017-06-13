#include <iostream>
//A. Game Outcome

using namespace std;

int n,col[101],row[101],temp,score;
int main()
{
    cin >> n;
    for(int i =0 ; i < n ; i++)
        for(int j =0 ; j < n ; j++)
            cin >> temp,col[j] +=temp, row[i] +=temp;

    for(int i =0 ; i < n ; i++)
        for(int j =0 ; j < n ; j++)
           if(col[j]>row[i] )score++;

    cout << score;

    return 0;
}


