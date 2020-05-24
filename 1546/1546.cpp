#include <iostream>

using namespace std;

int arr[1000];

int main() {
	int n, m = 0, sum = 0;
	double nAve;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
		if (m < arr[i])
			m = arr[i];
	}

	cout << (double)sum / m << endl;

	nAve = (double)sum / m * 100 / n;

	cout << nAve;

	return 0;
}