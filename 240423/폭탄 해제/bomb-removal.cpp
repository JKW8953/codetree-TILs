#include <iostream>

using namespace std;

class Bomb {
public:
	string defusingcode;
	char color;
    int seconds;

	Bomb(string defusingcode,char color,int seconds) {
		this->defusingcode = defusingcode;
		this->color = color;
        this->seconds = seconds;
	}
};

int main() {
    string defusingcode;
    char color;
    int seconds;
	cin >> defusingcode >> color >> seconds;
	Bomb Bomb1(defusingcode, color, seconds);

	cout << "code : " << Bomb1.defusingcode << '\n';
    cout << "color : " << Bomb1.color << '\n';
    cout << "second : " << Bomb1.seconds;
	return 0;
}