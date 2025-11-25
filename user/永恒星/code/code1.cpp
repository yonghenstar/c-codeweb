#include <bits/stdc++.h>
using namespace std;

int main() {
    char shuru;
    cout << "请输入: ";
    cin >> shuru;
    
    // 检查输入是否为大写字母
    if (isupper(shuru)) {
        char lowercase = tolower(shuru);
        cout << "转换后: " << lowercase << endl;
    } else {
        cout << "错误" << endl;
        return 1;
    }
    return 0;
}
