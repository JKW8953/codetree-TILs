#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000];

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for(int i=0;i<2*n;++i)
        cin >> arr[i];
    
    sort(arr, arr+2*n);

    int sum = 0;
    for(int i=0;i<=n/2;++i)
        sum = max(sum, arr[i]+arr[2*n-1-i]);

    cout << sum;
}