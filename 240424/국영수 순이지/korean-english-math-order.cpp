#include <iostream>
#include <tuple>
#include <algorithm>

using namespace std;

tuple<int, int, int, string> students[10];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int kor, eng, math;
		string name;
		cin >> name >> kor >> eng >> math;
		students[i] = make_tuple(-kor, -eng, -math, name);
	}

	sort(students, students + n);

	for (int i = 0; i < n; ++i) {
        int kor, eng, math;
		string name;
		tie(kor, eng, math, name) = students[i];
		cout << name << " " << -kor << " " << -eng << " " << -math << '\n';
	}
}