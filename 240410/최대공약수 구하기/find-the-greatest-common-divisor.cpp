#include <iostream>

using namespace std;

int GCD(int n, int m){
    int r = n % m;
    if(r==0)
        return m;
    else
        return GCD(m, r);
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << GCD(n,m);
    return 0;
}