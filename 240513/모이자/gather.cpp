#include <iostream>
using namespace std;

int arr[101];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int sum = 100000;

    for (int i = 0; i < n; ++i){
        int new_sum = 0;
        for (int j = 0; j < n; ++j)
            new_sum += arr[j] * abs(i - j);
        if (sum > new_sum)
            sum = new_sum;
    }

    cout << sum;
    return 0;
}