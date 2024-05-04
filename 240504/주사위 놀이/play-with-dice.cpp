#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[7] = {};
    for (int i = 0; i < 10; ++i){
        int num;
        cin >> num;
        arr[num]++;
    }

    for (int i = 1; i < 7; ++i)
        cout << i << " - " << arr[i] << '\n';
        
    return 0;
}