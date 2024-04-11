#include <iostream>
#include <vector>
using namespace std;

int main() {
    string A, B;
    vector<char> new_str;
    getline(cin,A);
    getline(cin,B);
    for(int i=0;i<A.length();++i){
        if(A[i]==' ')
            continue;
        new_str.push_back(A[i]);
    }
    for(int i=0;i<B.length();++i){
        if(B[i]==' ')
            continue;
        new_str.push_back(B[i]);
    }
    for(int i=0;i<new_str.size();++i){
        cout << new_str[i];
    }
    return 0;
}