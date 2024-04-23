#include <iostream>
#include <algorithm>

using namespace std;

bool ifSameword(string first, string second) {
	if (first.length() != second.length()) return false;
	sort(first.begin(), first.end());
	sort(second.begin(), second.end());
	for (int i = 0; i < first.length(); ++i)
		if (first[i] != second[i]) return false;
	return true;
}

int main() {
	int n;
	cin >> n;
	string first, second;
	cin >> first >> second;
	cout << (ifSameword(first, second) ? "Yes" : "No");
	return 0;
}