#include <iostream>

using namespace std;

int main() {
	int h, m;
	cin >> h >> m;

	if (m < 45) {
		m += 60;
		if (h == 0) h = 24;
		--h;
	}
	m -= 45;

	cout << h << "\n" << m;

	return 0;
}