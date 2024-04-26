#include <iostream>
#include <list>

using namespace std;

/* 
* N의 범위가 100000(이리저리 이동하다가 삽입/삭제하기에 범위가 크다)
* vector 말고 list를 이용해야 함
*/

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int n, m;
	cin >> n >> m;

	string str;
	cin >> str;
	list<char> l;
	for (auto A : str)
		l.push_back(A);

	auto it = l.end();

	while (m--) {
		char command;
		cin >> command;
		switch (command) {
		case 'L':
			if(it != l.begin()) it--;
			break;
		case 'R':
			if (it != l.end()) it++;
			break;
		case 'D':
			if (it != l.end())
				it = l.erase(it);
			break;
		case 'P':
			char alphabet;
			cin >> alphabet;
			l.insert(it, alphabet);
			break;
		}
	}

	for (auto A : l)
		cout << A;
}