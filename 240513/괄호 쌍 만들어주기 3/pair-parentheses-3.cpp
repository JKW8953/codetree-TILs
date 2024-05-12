#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int ans = 0, cnt = 0;
    for (int i = 0; i < str.length(); ++i){
        if (str[i] == '(') cnt++;
        if (str[i] == ')') ans += cnt;
    }
    cout << ans;
    return 0;
}