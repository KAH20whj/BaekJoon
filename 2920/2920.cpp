#include <iostream>

using namespace std;

int main() { 
	int arr[8], swt;

	for (int i = 0; i < 8; i++)
		cin >> arr[i];

	for (int i = 0; i < 7; i++) {
		if (arr[i] + 1 == arr[i + 1]) swt = 1;
		else if (arr[i] - 1 == arr[i + 1]) swt = 2;
		else {
			swt = 3;
			break;
		}
	}

	switch (swt) {
	case 1:
		cout << "ascending";
		break;
	case 2:
		cout << "descending";
		break;
	case 3:
		cout << "mixed";
		break;
	}

	return 0;
}