#include <iostream>

using namespace std;

int main() {
	int n, min = 0, max = 0;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 1; i < n; i++) {
		if (arr[min] > arr[i])
			min = i;

		if (arr[i] > arr[max])
			max = i;
	}

	cout << arr[min] << " " << arr[max];

	delete[] arr;

	return 0;
}