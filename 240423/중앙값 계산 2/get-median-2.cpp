#include <iostream>
#include <algorithm>

using namespace std;

int arr[101];

int main() {
    int n;
    cin >> n;

    for (int i=1;i<=n;++i){
        cin >> arr[i];
        if(i % 2 != 0){
            sort(arr + 1, arr + i);
            cout << arr[i / 2 + 1] << " ";
        }
    }
    return 0;
}