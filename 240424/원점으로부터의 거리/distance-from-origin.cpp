#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2) {
	if (p1.second != p2.second)
		return p1.second < p2.second;
	return p1.first < p2.first;
}

int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> vec;
	
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		vec.push_back(make_pair(i + 1, abs(x) + abs(y)));
	}

	sort(vec.begin(), vec.begin() + n, cmp);

	for (int i = 0; i < n; ++i)
		cout << vec[i].first << '\n';
}