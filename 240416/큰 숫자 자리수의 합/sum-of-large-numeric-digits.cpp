#include <iostream>

using namespace std;

int fun(int num){
    if(num==0) return 0;
    
    return fun(num/10)+num%10;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int num = a*b*c;
    cout << fun(num);
    return 0;
}