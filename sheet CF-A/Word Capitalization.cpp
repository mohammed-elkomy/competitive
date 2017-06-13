 #include <iostream>

using namespace std;
//Word Capitalization
char input[1001];
int main() {

cin >> input;
    input[0]=(input[0]>90 ?input[0]-32:input[0]);
    cout << input << endl;
    return 0;
}
