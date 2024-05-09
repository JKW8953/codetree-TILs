#include <iostream>
#include <algorithm>

using namespace std;

struct S {
	int num = 0;
	int idx = 0;
};

bool cmp(const S& a, const S& b) {
	if (a.num != b.num) return a.num < b.num;
	return a.idx < b.idx;
}

int main()
{
	int n;
	cin >> n;
	S arr[1001];

	for (int i = 1; i <= n; ++i) {
		int num;
		cin >> num;
		arr[i] = S{ num, i };
	}

	sort(arr + 1, arr + 1 + n, cmp);

	int ans[1001];

	for (int i = 1; i <= n; ++i)
		ans[arr[i].idx] = i;

	for (int i = 1; i <= n; ++i)
		cout << ans[i] << " ";
}