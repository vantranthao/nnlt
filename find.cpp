// tim 1 so trong mang (da thoa man)
#include <iostream>
#include <cmath>
using namespace std;
const int DECLARED_SIZE = 20; // max size
// nhap mang, dung khi gap 1 so am
void fillArray(int a[], int size, int& numberUsed) {
	cout << "Size = "; cin >> size;
	cout << "Dung khi gap so am";
	int next, index = 0;
	cin >> next;
	while ((next >= 0) && (index < size)) {
		a[index] = next;
		index++;
		cin >> next;
	}
	numberUsed = index; // chi so ma mang do nhap vao da thich hop (all so > 0)
}

int search(const int a[], int numberUsed, int target) {
	int index = 0; // index of array
	bool found = false;
	while((!found)&&(index < numberUsed)) {
		if (target == a[index]) found = true;
		else index++;
	}
	if (found) return index;
	else return -1;
}
int main() {
	int arr[DECLARED_SIZE], listSize, target;
	fillArray(arr,DECLARED_SIZE, listSize); // nhap array
	char ans;
	int result;
	do {
		cout << "Nhap so can tim: ";
		cin >> target;
		result = search(arr, listSize, target);
		if (result == -1) cout << "khong co trong dsach";
		else {
			cout << target << "duoc luu o vi tri" << result;
		}
		cout << "Tim kiem lai? (y/n)"; cin >> ans;
	} while ((ans!= 'n') && (ans != 'N'));
	cout << "Ket thuc!";
}

