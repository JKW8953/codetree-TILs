#include <iostream>

using namespace std;

int fun(int n){
    if(n<=2) return f(2 * n);

    return (f(n-1)*f(n-2))%100;
}
int main() {
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}