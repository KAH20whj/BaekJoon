#include <iostream>

using namespace std;

int main() {
	int a, b, c, pd = 0, bep = 0;
	cin >> a;
	cin >> b;
	cin >> c;

	if (b >= c)
		bep = -1;
	else
		bep = a / (c - b) + 1;
	cout << bep;
	return 0;
}