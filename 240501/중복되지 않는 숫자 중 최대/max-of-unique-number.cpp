#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[1001] = {};

    for (int i=1;i<=n;++i){
        int num;
        cin >> num;
        arr[num]++;
    }

    int idx = -1;
    for (int i=1000;i>=1;--i){
        if(arr[i] == 1){
            idx = i;
            break;
        }
    }

    cout << idx;

    return 0;
}