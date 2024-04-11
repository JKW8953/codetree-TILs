#include <iostream>
using namespace std;
void f(int N){
    if(N==0)
        return;
    cout << N << " ";
    f(N-1);
    cout << N << " ";
}
int main() {
    int N;
    cin >> N;
    f(N);
    return 0;
}