#include <iostream>

using namespace std;

void fun(int &a,int &b){
    if(a>b){
        a *= 2;
        b += 10;
    }
    else{
        b *= 2;
        a += 10;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    fun(a, b);
    cout << a << " " << b;
    return 0;
}