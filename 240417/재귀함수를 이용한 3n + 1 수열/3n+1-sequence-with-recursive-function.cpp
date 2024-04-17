#include <iostream>

using namespace std;

int cnt = 0;

int fun(int n){
    if(n==1){
        return 1;
    }

    if(n%2==0){
        cnt++;
        return fun(n / 2);
    }
    else {
        cnt++;
        return fun(3 * n + 1);
    }
}
int main() {
    int n;
    cin >> n;
    fun(n);
    cout << cnt;
    return 0;
}