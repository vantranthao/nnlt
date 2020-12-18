#include <iostream>
#include <cmath>
using namespace std;
// constructor1
class DayOfYear {
	public: 
		DayOfYear(int dayValue, int monthValue);
		DayOfYear(int monthValue);
		DayOfYear(); // constructor
		
		
		void input();
		void output();
		int getDay();
		int getMonth();
		void testDate();
	private:
		int day;
		int month;
};
DayOfYear::DayOfYear(int dayValue, int monthValue):day(dayValue), month(monthValue){
	testDate();
}
DayOfYear::DayOfYear(int monthValue):day(1), month(monthValue) {
	testDate();
}
DayOfYear::DayOfYear():day(1), month(1){ }
void DayOfYear::testDate() {
	if( (day<1) || (day>31) ) {
		cout << "Khong dung!";
		exit(1);
	} 
	if ( (month<1) || (month>12) ) {
		cout << "Khong dung!";
		exit(1);
	}
}
int main() {
	DayOfYear date1(21,2), date2(5), date3;
	cout << "Cac ngay thang da khoi tao: \n";
	date1.output(); cout << endl;
	date2.output(); cout << endl;
	date3.output(); cout << endl;
	return 0;
}

