#include <iostream>
#include <list>

using namespace std;

int main() {
	int n;
	cin >> n;
	string command;
	list<int> lst;
	while (n--) {
		cin >> command;
		if (command == "push_front") {
			int A;
			cin >> A;
			lst.push_front(A);
		}
		if (command == "push_back") {
			int A;
			cin >> A;
			lst.push_back(A);
		}
		if (command == "pop_front") {
			cout << lst.front() << '\n';
			lst.pop_front();
		}
		if (command == "pop_back") {
			cout << lst.back() << '\n';
			lst.pop_back();
		}
		if (command == "size")
			cout << lst.size() << '\n';
		if (command == "empty")
			cout << int(lst.empty()) << '\n';
		if (command == "front")
			cout << lst.front() << '\n';
		if (command == "back")
			cout << lst.back() << '\n';
	}
}