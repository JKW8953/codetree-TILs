#include <iostream>

using namespace std;

int sum(int N){
    if (N == 1) return 1;
    return N + sum(N-1);
}

int main() {
    int N;
    cin >> N;
    cout << sum(N);
    return 0;
}