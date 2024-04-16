#include <iostream>

using namespace std;

int arr[100];

int fun(int n){
    if(n==0) return arr[0];
    return max(arr[n-1], fun(n-1));
}

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    cout << fun(n);
    return 0;
}