#include <iostream>
#include <cmath>
using namespace std;
class HinhTron {
	public:
		double getBanKinh();
		string getMauSac();
		double dienTich();
		void input();
		void output();
	private:
		double banKinh;
		string mauSac;
};
void HinhTron::input() {
	cout << "Nhap ban kinh: "; cin >> banKinh;
	cout << "Nhap mau sac: "; cin >> mauSac;
}
void HinhTron::output() {
	cout << "Thong so cua hinh tron: \n" << banKinh << "\nDien tich: " << dienTich() << "Mau sac: " << mauSac;
}

double HinhTron::dienTich() {
	return banKinh*banKinh*3.1416;
}
double HinhTron::getBanKinh() {
	return banKinh;
}
string HinhTron::getMauSac() {
	return mauSac;
}

int main() {
	HinhTron c1, c2;
	c1.input(); c2.input();
	c1.output(); c2.output();
}
