#include <iostream>

using namespace std;

void rectangle(int n,int m){
    for (int i=0;i<n;++i){
        for (int i=0;i<m;++i)
            cout << 1;
        cout << '\n';
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    rectangle(n,m);
    return 0;
}