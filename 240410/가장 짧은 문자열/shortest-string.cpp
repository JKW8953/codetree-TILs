#include <iostream>
using namespace std;
int main() {
    string a, b, c;
    cin >> a >> b >> c;
    int A = max(max(a.length(), b.length()),c.length());
    int B = min(min(a.length(), b.length()),c.length());
    cout << A - B;
    return 0;
}