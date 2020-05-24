#include <iostream>

using namespace std;

int main() {
	int n, front, end, m; // n = 처음 수, m = 바뀐 수
	int cnt = 0;

	cin >> n;
	m = n;

	do {
		++cnt;
		front = m % 10;
		end = (m / 10) + front;
		m = (front * 10) + (end % 10);
	} while (n != m);

	cout << cnt;

	return 0;
}