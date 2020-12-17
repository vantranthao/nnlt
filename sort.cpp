#include <iostream>
#include <cmath>
using namespace std;
void fillArray(int a[], int size, int& numberUsed) {
	cout << "Size: "; cin >> size;
	cout << "Dung neu gap 1 so am";
	int index, next = 0;
	cin >> next;
	while((index < numberUsed) && (next >= 0)) {
		a[index] = next;
		index++;
		cin >> next;
	} numberUsed = index; // chi so cua mang phu hop
}
void sort(int a[], int numberUsed) {
	int indexOfNextSmallest;
	for(int index = 0; index < numberUsed-1; index++) {
		indexOfNextSmallest = indexOfNextSmallest(a, index, numberUsed);
		swapValue(a[index], a[indexOfNextSmallest]);
	}
}
void swapValue (int& v1, int& v2) { // HOAN VI
	int temp;
	temp = v1;
	v1 = v2;
	v2 = temp;
}
int indexOfNextSmallest(const int a[], int startIndex, int numberUsed) {
	int min = a[startIndex], indexOfMin = startIndex;
	for(int index = startIndex+1; index < numberUsed; index++) {
		if (a[index] < min) {
			min = a[index];
			indexOfMin = index;
		}
	} return indexOfMin;
}
int main() {
	cout << "Ctrinh sxep so tang dan";
	int sampleArray[10], numberUsed;
	fillArray(sampleArray, 10, numberUsed);
	sort(sampleArray, numberUsed);
	cout << "Thu tu duoc sxep cua cac so: ";
	for (int index = 0; index < numberUsed; index++) {
		cout << sampleArray[index] << " ";
	} cout << endl;
}
