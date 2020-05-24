#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b;

	c = a * b;

	while (b > 0) {
		cout << a * (b % 10) << endl;
		b /= 10;
	}

	cout << c;

	return 0;
}