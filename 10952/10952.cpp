#include <iostream>

using namespace std;

int arr[10000000];

int main() {
	int a, b, size = 0;

	cin >> a >> b;

	while (a != 0 || b != 0) {
		arr[size] = a + b;
		++size;
		cin >> a >> b;
	}

	for (int i = 0; i < size; i++)
		cout << arr[i];

	return 0;
}