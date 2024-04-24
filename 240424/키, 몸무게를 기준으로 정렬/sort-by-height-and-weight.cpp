#include <iostream>
#include <algorithm>

using namespace std;

class Person {
public:
	string name;
	int height, weight;
	Person(string name, int height, int weight) {
		this->name = name;
		this->height = height;
		this->weight = weight;
	}
	Person() {};
};

bool cmp(Person a, Person b) {
    if(a.height != b.height)
	    return a.height < b.height;
    if(a.weight != b.weight)
	    return a.weight > b.weight;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	Person people[10];

	for (int i = 0; i < n; ++i) {
		string name;
		int height, weight;
		cin >> name >> height >> weight;
		people[i] = Person(name, height, weight);
	}

	sort(people, people + n, cmp);

	for (int i = 0; i < n; ++i)
		cout << people[i].name << " " << people[i].height << " " << people[i].weight << '\n';
}