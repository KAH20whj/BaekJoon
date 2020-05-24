#include <iostream>

using namespace std;

int day, cnt;
int car[5];

int main() {
	cin >> day;

	for (int i = 0; i < 5; i++) {
		cin >> car[i];

		if (car[i] == day)
			++cnt;
	}

	cout << cnt;

	return 0;
}