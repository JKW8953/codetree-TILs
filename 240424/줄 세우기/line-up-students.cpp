#include <iostream>
#include <algorithm>

using namespace std;

class Person {
public:
	int idx, height, weight;
	Person(int idx, int weight, int height) {
		this->idx = idx;
        this->weight = weight;
		this->height = height;
	}
	Person() {};
};

bool cmp(Person a, Person b) {
    if(a.weight == b.weight && a.height == b.height)
	    return a.idx < b.idx;
    else if(a.height == b.height)
        return a.weight > b.weight;
    else
        return a.height > b.height;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	Person people[1000];

	for (int idx = 1; idx <= n; ++idx) {
		int weight, height;
		cin >> height >> weight;
		people[idx - 1] = Person(idx, weight, height);
	}

	sort(people, people + n, cmp);

	for (int i = 0; i < n; ++i)
		cout << people[i].height << " " << people[i].weight << " " << people[i].idx << '\n';
}