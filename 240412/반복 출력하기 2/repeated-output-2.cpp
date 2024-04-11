#include <iostream>
using namespace std;

void f(int N){
    if(N==0)
        return;
    f(N-1);
    cout << "HelloWorld" << '\n';
}

int main() {
    int N;
    cin >> N;
    f(N);
    return 0;
}