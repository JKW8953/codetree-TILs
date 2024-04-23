#include <iostream>

using namespace std;

class Spy {
public:
	string secretcode; char meetingplace; int time;

	Spy(string s, char m, int t) {
		this->secretcode = s;
		this->meetingplace = m;
		this->time = t;
	}
};

int main() {
	string s; char m; int t;
	cin >> s >> m >> t;
	Spy Spy1(s, m, t);
	cout << "secret code : " << Spy1.secretcode << '\n' 
		 << "meeting point : " << Spy1.meetingplace << '\n'
		 << "time : " << Spy1.time;
	return 0;
}