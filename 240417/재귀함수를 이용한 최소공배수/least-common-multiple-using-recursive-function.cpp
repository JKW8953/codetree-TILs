#include <iostream>

using namespace std;

int GCD(int m, int n){
    int r = m % n;

    if(r==0) return n;

    return GCD(n, r);
}

int main() {
    int n;
    cin >> n;
    int arr[10];

    for(int i=0;i<n;++i)
        cin >> arr[i];

    int gcd = arr[0], lcd = arr[0];
    for(int i=0;i<n-1;++i){
        gcd = GCD(lcd, arr[i+1]);
        lcd = (lcd * arr[i+1]) / gcd;
    }
    
    cout << lcd;

    return 0;
}