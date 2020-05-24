#include <iostream>

using namespace std;

int main() {
	int a, b, c, div;

	cin >> a >> b >> c;

	int val = a * b * c;
	int num[10] = { 0, };

	while (val > 0) {
		div = val % 10;
		++num[div];
		val /= 10;
	}

	for (auto i : num) {
		cout << i << " ";
	}

	return 0;
}