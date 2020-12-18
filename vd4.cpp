#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
class DayOfYear {
	public:
		// constructor
		DayOfYear(int dayValue, int monthValue);
		DayOfYear(int monthValue);
		DayOfYear();
		
		int getDay() {
			return day;
		}
		int getMonth() {
			return month;
		}
		void input() {
			cout << "Ngay: "; cin >> day;
			cout << "Thang: "; cin >> month;
		}
		void output() {
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
	private:
		int day;
		int month;
		void testDate();
};

void DayOfYear::testDate() {
	if (day<1 || day>31 ) {
		cout << "Sai ngay";
		exit(1);
	}
	if (month<1 || month>12) {
		cout << "Sai thang";
		exit(1);
	}
}

DayOfYear::DayOfYear(int dayValue, int monthValue) : day(dayValue), month(monthValue) {
	testDate();
}
DayOfYear::DayOfYear(int monthValue) : day(1), month(monthValue) {
	testDate();
}
DayOfYear::DayOfYear() : day(1), month(1) {
	testDate();
}
int main() {
	DayOfYear firstDay, secondDay;
	firstDay.input();
	firstDay.output();
}


