#include <iostream>
#include <vector>

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
	vector<Data> vec;
	
	int n;
	cin >> n;

	int idx = 0;
	while (1) {
		string date, day, weather;
		cin >> date >> day >> weather;
		vec.push_back(Data(date, day, weather));
		if(weather == "Rain") break;
		idx++;
	}

	cout << vec[idx].date << " " << vec[idx].day << " " << vec[idx].weather;
	return 0;
}