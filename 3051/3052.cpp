#include <iostream>

using namespace std;

int main() {
	int arr[10], cnt = 0;
	int rem[42] = { 0, };
	 
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		++rem[arr[i] % 42];
	}

	for (int i = 0; i < 42; i++)
		if (rem[i] > 0)
			++cnt;

	cout << cnt;

	return 0;
}