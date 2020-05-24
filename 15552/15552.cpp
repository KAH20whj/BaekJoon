#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, n, i;
	cin >> n;
	int* arr = new int[n];


	for (i = 0; i < n; i++) {
		cin >> a >> b;
		arr[i] = a + b;
	}

	for (i = 0; i < n; i++) {
		cout << arr[i] << "\n";
	}

	delete[] arr;

	return 0;
}