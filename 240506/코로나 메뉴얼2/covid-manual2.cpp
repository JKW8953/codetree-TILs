#include <iostream>
#include <utility>

using namespace std;

int main() {
	int arr[4] = {};
    for (int i =0;i<3;++i){
        char cold;
        int temp = 0;
        cin >> cold >> temp;
        pair<char, int> person = make_pair(cold, temp);
        if (cold == 'Y'){
            if (temp >= 37) arr[0]++;
            else arr[2]++;
        }
        else{
            if (temp >= 37) arr[1]++;
            else arr[3]++;
        }
    }
    for (auto c: arr) cout << c << ' ';
    if (arr[0] >= 2) cout << 'E';



	return 0;
}