#include <iostream>

using namespace std;

void PrintNlines(int n){
    for(int i = 0; i < n; i++) {
        cout << "12345^&*()_";
    cout << '\n';
    }
}

int main() {
    int N;
    cin >> N;
    PrintNlines(N);
    return 0;
}