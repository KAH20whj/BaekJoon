#include <iostream>

using namespace std;

int main() {
	int a, b, n, i;
	cin >> n;
	int* arr = new int[n];

	for (i = 0; i < n; i++) {
		cin >> a >> b;
		arr[i] = a + b;
	}

	for (i = 0; i < n; i++) {
		cout << "Case #" << i + 1 << ": " << arr[i] << endl;
	}

	delete[] arr;

	return 0;
}