#include <iostream>
#include <cmath>
using namespace std;

class DayOfYear { // today, birthday
	public:
		void input();
		void output();
		int getDay();
		int getMonth();
	private: // 2 bien khai bao (main) se co 2 thuoc tinh nay
		int day; // getDay lay day
		int month; // getMonth lay month
};
int DayOfYear::getDay() {
	return day;
}
int DayOfYear::getMonth() {
	return month;
}
void DayOfYear::input() {
	cout << "Nhap ngay: "; cin >> day;
	cout << "Nhap thang: "; cin >> month;
}

void DayOfYear::output() {
	cout << day << " ";
	switch(month) {
		case 1:
			cout << "Thang Mot"; break;
		case 2:
			cout << "Thang Mot"; break;
		case 3:
			cout << "Thang Mot"; break;
		case 4:
			cout << "Thang Mot"; break;
		case 5:
			cout << "Thang Mot"; break;
		case 6:
			cout << "Thang Mot"; break;
		case 7:
			cout << "Thang Mot"; break;
		case 8:
			cout << "Thang Mot"; break;
		case 9:
			cout << "Thang Mot"; break;
		case 10:
			cout << "Thang Mot"; break;
		case 11:
			cout << "Thang Mot"; break;
		case 12:
			cout << "Thang Mot"; break;
	}
}
int main() {
	DayOfYear today, birthday;
	today.input(); birthday.input();
	today.output(); cout << endl; birthday.output(); cout << endl;
	if (today.getDay() == birthday.getDay() && birthday.getMonth() == birthday.getMonth()) {
		cout << "sinh nhat";
	} else cout << "chuc mung";
}























