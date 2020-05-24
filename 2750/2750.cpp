#include <iostream>

using namespace std;
 
int main() {
	int size, min, tmp;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
		cin >> arr[i];

	for (int i = 0; i < size - 1; i++) {
		min = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[min] > arr[j])
				min = j;
		}
		tmp = arr[i];
		arr[i] = arr[min];
		arr[min] = tmp;
	}

	for (int i = 0; i < size; i++)
		cout << arr[i] << "\n";


	delete[] arr;

	return 0;
}