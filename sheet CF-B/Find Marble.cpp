#include <iostream>




//Find Marble
using namespace std;



int solve(int n,int s,int t,int data[],int count){
    int temp =s;
    while(n--){
        if(temp==t) return count;
        temp=data[temp];
        if(temp==s) return -1;
        count++;
    }

    return -1;
}

int main() {
    //freopen("j.txt", "r", stdin);

    int n,s,t,data[100005],count=0;

    scanf("%d %d %d", &n,&s,&t);
    for(int i =1 ; i<=n && scanf("%d ", &data[i]);i++);
    cout <<solve(n,s,t,data,count)<<endl;

    return 0;
}

