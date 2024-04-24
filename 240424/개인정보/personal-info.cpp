#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

class Person {
public:
	string name;
	int height;
    double weight;
	Person(string name, int height, double weight) {
		this->name = name;
		this->height = height;
		this->weight = weight;
	}
	Person() {};
};

bool cmp_name(Person a, Person b) {
	return a.name < b.name;
}

bool cmp_height(Person a, Person b) {
	return a.height > b.height;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	Person people[5];

	for (int i = 0; i < 5; ++i) {
		string name;
		int height;
        double weight;
		cin >> name >> height >> weight;
		people[i] = Person(name, height, weight);
	}

    cout << fixed;
    cout << setprecision(1);

	sort(people, people + 5, cmp_name);

    cout << "name" << '\n';
	for (int i = 0; i < 5; ++i)
		cout << people[i].name << " " << people[i].height << " " << people[i].weight << '\n';
    
    sort(people, people + 5, cmp_height);

    cout << "\nheight" << '\n';
	for (int i = 0; i < 5; ++i)
		cout << people[i].name << " " << people[i].height << " " << people[i].weight << '\n';
}