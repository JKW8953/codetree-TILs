#include <iostream>

using namespace std;

int fun(int n){
    if(n<=2) return 2 * n;

    return (fun(n-1)*fun(n-2))%100;
}

int main() {
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}