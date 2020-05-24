#include <iostream>

using namespace std;

int main() {
	int n, three, five, tot;
	cin >> n;

	five = n / 5;
	three = n / 3;
	tot = three + 1;

	for (int a = 0; a <= five; a++)
	{
		for (int b = 0; b <= three; b++)
			if (a * 5 + b * 3 == n && a + b < tot)
				tot = a + b;
	}

	if (tot == three + 1)
		tot = -1;

	cout << tot;

	return 0;
}