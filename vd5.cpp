#include <iostream>
#include <cmath>
using namespace std;
class SoPhuc {
	public:
		//constructor
//		SoPhuc(int phanThuc, int phanAo);
//		SoPhuc(int phanAo);
//		SoPhuc(int phanThuc);
//		SoPhuc();
		// simple struct and know how a program run!
		void input() {
			cout << "Nhap phan ao: "; cin >> ao;
			cout << "Nhap phan thuc: "; cin >> thuc;
		}
		void output();
		int getAo() {
			return ao;
		}
		int getThuc() {
			return thuc;
		}
		
	private:
		int ao;
		int thuc;
};

// a+bi = thuc + ao.i
void SoPhuc::output() {
	cout << ao << " " << thuc;
}
int main() {
	SoPhuc num1, num2;
	num1.input();
	num2.input();
	cout << endl << num1.getAo() + num2.getAo();
}
