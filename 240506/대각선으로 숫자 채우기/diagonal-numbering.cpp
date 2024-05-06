#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[100][100] = {};

    int cnt = 1;
    for (int i = 0; i < m; ++i){
        for (int row = 0, col = i; row < n && col >= 0; ++row, --col){
            arr[row][col] = cnt++;
        }
    }

    for (int i = 1; i < n; ++i){
        for (int row = i, col = m - 1; row < n && col >= 0; ++row, --col){
            arr[row][col] = cnt++;
        }
    }

    for (int row = 0; row < n; ++row){
        for (int col = 0; col < m; ++col)
            cout << arr[row][col] << ' ';
        cout << '\n';
    }
    return 0;
}