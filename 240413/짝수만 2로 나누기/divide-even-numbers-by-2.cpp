#include <iostream>
#include <vector>

using namespace std;

int n;

void fun(vector<int>& vec){
    for(int i=0;i<n;++i)
        if(vec[i]%2==0)
            vec[i] /= 2;
    for(int num:vec)
        cout << num << " ";
}

int main() {
    cin >> n;
    vector<int> vec(n);
    for(int i=0;i<n;++i){
        int temp;
        cin >> temp;
        vec[i] = temp;
    }
    fun(vec);
    return 0;
}