#include <iostream>
#include <algorithm>

using namespace std;

string arr[100];

int main() {
    int n, k;
    string T;
    cin >> n >> k >> T;

    for(int i=0;i<n;++i){
        string word;
        cin >> word;
        arr[i] = word;
    }

    sort(arr, arr+n);

    int cnt = 0;
    for(int i=0;i<n;++i){
        bool flag = true;
        for(int j=0;j<T.length();++j){
            if(arr[i][j]!=T[j]){
                flag = false;
                break;
            }
        }
        if(flag) cnt++;
        if(cnt==k){
            cout << arr[i];
            break;
        }
    }
    return 0;
}