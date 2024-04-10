#include <iostream>

using namespace std;

void square(int n){
    int cnt = 0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(cnt==9)
                cnt=0;
            cnt++;
            cout << cnt << " ";
        }
        cout << '\n';
    }
}

int main() {
    int n;
    cin >> n;
    square(n);
    return 0;
}