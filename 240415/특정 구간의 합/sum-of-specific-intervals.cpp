#include <iostream>

using namespace std;

int arr[101];

int main() {
    int n,m;
    cin >> n >> m;
    for(int i=1;i<=n;++i)
        cin >> arr[i];
    while(m--){
        int a1, a2, sum = 0;
        cin >> a1 >> a2;
        for(int i=a1;i<=a2;++i)
            sum += arr[i];
        cout << sum << '\n';
    }
    return 0;
}