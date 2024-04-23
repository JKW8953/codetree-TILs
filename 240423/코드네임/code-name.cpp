#include <iostream>
#include <vector>

using namespace std;

class Agent {
public:
	string codename;
	int score;

	Agent(string codename, int score) {
		this->codename = codename;
		this->score = score;
	}
};

int main() {
	vector<Agent> vec;
	
	for (int i = 0; i < 5; ++i) {
		string codename;
		int score;
		cin >> codename >> score;
		vec.push_back(Agent(codename, score));
	}

	int idx = 0;
	for (int i = 0; i < 4; ++i) {
		if (vec[idx].score > vec[i + 1].score)
			idx = i + 1;
	}

	cout << vec[idx].codename << " " << vec[idx].score;
	return 0;
}