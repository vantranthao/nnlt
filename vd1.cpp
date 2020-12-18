#include <iostream>
#include <cmath>
using namespace std;
struct CDAccoutV1 { // type
	double balance;
	double intersetRate;
	int term;
};
void getData(CDAccoutV1& theAccount) {
	cout << "Nhap vao so tien gui: "; 
	cin >> theAccount.balance;
	cout << "Nhap vao lai suat tiet kiem: ";
	cin >> theAccount.intersetRate;
	cout << "Nhap so thang gui: ";
	cin >> theAccount.term;
}
int main() {
	CDAccountV1 account;
	getData(account);
	double rateFraction, interest;
	rateFraction = account.interestRate/100.0;
	interest = account.balance*(rateFraction*(account.term/12.0));
	account.balance = account.balance + interest;
	cout << "Khi giay chung nhan gui tiet kiem cua ban dao han trong " << account.term << " thang, \n" << "no se co luong tien la " << account.balance << endl;
	
}
