#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
	int arr[10] = {};
	double sum = 0;
    int cnt = 0;
	for (int i = 0; i < 10; ++i) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; ++i) {
		if (arr[i] >= 250)
			break;
		sum += arr[i];
		cnt++;
	}
	cout << sum << " " << round(sum / cnt * 10) / 10;
	return 0;
}