#include <iostream>

using namespace std;

int main() {
	int a, b, n;
	cin >> n;
	int* num = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		num[i] = a + b;
	}

	for (int i = 0; i < n; i++) {
		cout << num[i] << endl;
	}

	delete[] num;

	return 0;
}