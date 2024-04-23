#include <iostream>

using namespace std;

struct Object {
	string ID; int level;

	Object(string ID, int level) {
		this->ID = ID;
		this->level = level;
	}
};

int main() {
	Object Object1("codetree", 10);
	string id;
	int lv;
	cin >> id >> lv;
	Object Object2(id, lv);
	cout << "user " << Object1.ID << " lv " << Object1.level << '\n';
	cout << "user " << Object2.ID << " lv " << Object2.level << '\n';
	return 0;
}