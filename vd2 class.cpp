#include <iostream>
#include <cmath>
using namespace std;

class DayOfYear {
	public:
		void output();
		int day;
		int month;
};
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
	cout << "Nhap ngay hom nay: ";
	cin >> today.day;
	cout << "Nhap thang : ";
	cin >> today.month;
	cout << "Nhap ngay sinh: ";
	cin >> birthday.day;
	cout << "Nhap thang sinh: ";
	cin >> birthday.month;
	
	cout << "Ngay hom nay la: ";
	today.output();
	cout << "Ngay sinh nhat la: ";
	birthday.output(); cout << endl;
	if (today.day == birthday.day && today.month == birthday.month) {
		cout << "Sinh nhat!";
	} else cout << "Chuc mung!";
}
