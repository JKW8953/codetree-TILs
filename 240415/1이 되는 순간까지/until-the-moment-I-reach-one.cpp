#include <iostream>

using namespace std;

int cnt = 0;

int F(int n) {
    if(n == 1) 
        return cnt;

    if(n % 2 == 0){
        cnt++;
        return F(n / 2);
    }
    else{
        cnt++;
        return F(n / 3);
    }
}

int main() {
    int N;
    cin >> N;
    cout << F(N);
    return 0;
}