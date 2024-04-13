#include <iostream>

using namespace std;

string A;

bool fun(string& A){
    for(int i=1;i<A.length();++i)
        if(A[0]!=A[i])
            return true;
    return false;
}

int main() {
    cin >> A;
    cout << (fun(A)?"Yes":"No");
    return 0;
}