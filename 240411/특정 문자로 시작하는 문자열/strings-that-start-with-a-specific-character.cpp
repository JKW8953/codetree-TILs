#include <iostream>
#include <iomanip>
using namespace std;

string arr[21];

int main() {
    int n;
    cin >> n;
    int cnt = 0;
    double sum = 0;
    for(int i=0;i<n;++i){
        cin >> arr[i];
    }
    char a;
    cin >> a;
    for(int i=0;i<n;++i){
        if(arr[i][0]==a){
            cnt++;
            sum += arr[i].length();
        }
    }
    cout << fixed;
    cout << setprecision(2);
    cout << cnt << " " << sum / cnt;
    return 0;
}