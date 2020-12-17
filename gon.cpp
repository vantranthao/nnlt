#include <iostream>
#include <cmath>
using namespace std;
const int MAX_NUMBER_SCORES = 10;
void fillArray(int a[], int size, int& numberUsed) {
	cout << "Size: "; cin >> size;
	cout << "Het dsach bang 1 so am";
	int next, index = 0;
	cin >> next; // nhap 1 so dau tien cua mang a
	while ((next>=0) && (index < size)) {
		a[index] = next; // so dau tien trong mang a[0] = next vua nhap
		index++;
		cin>> next;
	}
	numberUsed = index; // chi so trong mang khi so > 0, khong tinh so am
}
double computeAverage(const int a[], int numberUsed) {
	double total = 0;
	for (int index = 0, index < numberUsed; index++) {
		total += a[index];
	}
	if (numberUsed > 0) return (total/numberUsed);
	else {
		cout << "Loi!";
	}
}
int main() {
	int score[MAX_NUMBER_SCORES], numberUsed;
	cout << "Ctrinh doc cac diem gon va hien thi \n"
		<< "cach biet cua moi diem voi gia tri tbinh. \n";
	cout << "Nhap cac diem gon: \n";
	fillArray(score, MAX_NUMBER_SCORES, numberUsed);
	showDifferences(score, numberUsed);
}

