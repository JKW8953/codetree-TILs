#include <iostream>

using namespace std;

class Data {
public:
	string date, day, weather;

	Data(string date, string day, string weather) {
		this->date = date;
		this->day = day;
		this->weather = weather;
	}
};


int main() {
	int n;
	cin >> n;

	Data result("9999-99-99", "", "Rain");

	for (int i = 0; i < n; ++i) {
		string date, day, weather;
		cin >> date >> day >> weather;
		if (weather == "Rain")
			if (date <= result.date) {
				result.date = date;
				result.day = day;
			}
	}

	cout << result.date << " " << result.day << " " << result.weather;

	return 0;
}