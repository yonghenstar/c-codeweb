#include <bits/stdc++.h>
using namespace std;

int main() {
    char inputChar;
    cout << "请输入小写字母: ";
    cin >> inputChar;
    if (islower(inputChar)) 
    {
        char uppercase = toupper(inputChar);
        int position = uppercase - 'A' + 1;
        cout << "大写字母: " << uppercase << endl;
        cout << "对应数字: " << position << endl;
    }
    else 
    {
        cout << "输入错误" << endl;
        return 1;
    }
    return 0;
}
