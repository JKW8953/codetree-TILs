#include <iostream>
using namespace std;
int main() {
    string arr[5] = { "apple", "banana", "grape", "blueberry", "orange" };
    int cnt=0;
    char alphabet;
    cin >> alphabet;
    for(int i=0;i<5;++i){
        if(arr[i][2] == alphabet || arr[i][3] == alphabet){
            cout << arr[i] << '\n';
            cnt++;
            continue;
        }
    }
    cout << cnt;
    return 0;
}