#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];
    for(int i=0;i<100;++i)
        arr[i] = -1;
    for(int i=0;i<n;++i){
        int num;
        cin >> num;
        if(num%2==0)
            arr[i] = num;
    }
    for(int i=99;i>=0;--i){
        if(arr[i]==-1)
            continue;
        cout << arr[i] << " ";

    }
    return 0;
}