  #include <iostream>

using namespace std;
//Black Square

int main() {
    int cal[4];char dat[100001];int cost=0;
    cin >> cal[0]>>cal[1]>>cal[2]>>cal[3]>>dat;

    for(int i =0 ;dat[i] != 0;i++)
        cost += cal[dat[i]-'0'-1];

    cout << cost <<endl;

    return 0;
}
