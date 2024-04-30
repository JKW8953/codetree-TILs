#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int min = arr[0];
    for (int i = 0; i < n; ++i)
        if (arr[i] < min) min = arr[i];
    
    int cnt = 0;
    for (int i = 0; i < n; ++i)
        if (min == arr[i]) cnt++;
    
    cout << min << " " << cnt;
    return 0;
}