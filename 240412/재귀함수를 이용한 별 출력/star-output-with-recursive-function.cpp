#include <iostream>
using namespace std;

void f(int N){
    if(N==0)
        return;
    f(N-1);
    for(int i=0;i<N;++i)
        cout << "*";
    cout << '\n';
}

int main() {
    int N;
    cin >> N;
    f(N);
    return 0;
}