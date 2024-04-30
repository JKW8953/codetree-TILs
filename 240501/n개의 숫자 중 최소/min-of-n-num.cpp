#include <iostream>

using namespace std;

int main() {
    int arr[10];
    for (int i = 0; i < 10; ++i)
        cin >> arr[i];
    
    int min = arr[0];
    for (int i = 0; i < 10; ++i)
        if (arr[i] < min) min = arr[i];
    
    int cnt = 0;
    for (int i = 0; i < 10; ++i)
        if (min == arr[i]) cnt++;
    
    cout << min << " " << cnt;
    return 0;
}