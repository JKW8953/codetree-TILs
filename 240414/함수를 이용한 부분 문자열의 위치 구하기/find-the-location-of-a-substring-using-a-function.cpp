#include <iostream>
#include <cstring>
using namespace std;

char str[100], substr[100];

int idx;

bool fun(){
    for (int i = 0;i <= strlen(str) - strlen(substr); ++i){
        bool found = true;
        for (int j = 0; j < strlen(substr); ++j){
            if(str[i + j] != substr[j]){
                found = false;
                break;
            }
        }
        if(found){
            idx = i;
            return true;
        }
    }
    return false;
}

int main() {
    cin >> str >> substr;
    cout << (fun() ? idx : -1);
}