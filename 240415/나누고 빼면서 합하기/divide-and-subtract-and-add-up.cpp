#include <iostream>

using namespace std;

int arr[101];

void fun(int n, int m){
    int sum = 0;
    for(int i=1;i<=n;++i){
        cin >> arr[i];
    }
    while(1){
        sum += arr[m];
        if(m==1)
            break;
        if(m%2!=0)
            m -= 1;
        else
            m /= 2;
    }
    cout << sum;
}

int main() {
    int n,m;
    cin >> n >> m;
    fun(n,m);
    return 0;
}