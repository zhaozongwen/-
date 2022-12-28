#include <iostream>
using namespace std;

int BinarySearch(int *array, int aSize, int key) {
	if ( array == NULL || aSize == 0 )
		return -1;
	int left = 0;
	int right = aSize - 1;
	int mid = 0;
	while ( left <= right ) {
		mid = (left + right ) / 2;
		if ( array[mid] < key)
			left = mid + 1;
		else if ( array[mid] > key )
			right = mid - 1;
		else
			return mid;
	}
	return -1;
}//非递归

int BinarySearchRecursive(int *array, int left, int right, int key) {
	if (left > right) {
		return -1;
	}
	int middle = (left + right) / 2;
	if (array[middle] == key) {
		return middle;
	} else if (array[middle] < key) {
		return BinarySearchRecursive(array, middle + 1, right, key);
	} else
		return BinarySearchRecursive(array, left, middle - 1, key);
}//递归

int main() {
	int array[8];
	for (int i = 0; i < 8; i++) {
		cin >> array[i];
	}
	int x;
	cin >> x;
	cout << "No recursive:" << endl;
	cout << "position:" << BinarySearch(array, 8, x) << endl;
	cout << "recursive:" << endl;
	cout << "position:" << BinarySearchRecursive(array, 0, 7, x) << endl;
}
