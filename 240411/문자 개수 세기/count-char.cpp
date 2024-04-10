#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    char alphabet;
    cin >> alphabet;
    int cnt = 0;
    for(int i=0;i<str.length();++i){
        if(str[i]==alphabet)
            cnt++;
    }
    cout << cnt;
    return 0;
}