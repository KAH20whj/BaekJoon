#include <iostream>

using namespace std;

int main() {
	int arr[10], max = 0;

	for (int i = 0; i < 10; i++) {
		cin >> arr[i];

		if (arr[max] < arr[i])
			max = i;
	}

	cout << arr[max] << endl;
	cout << max + 1;

	return 0;
}