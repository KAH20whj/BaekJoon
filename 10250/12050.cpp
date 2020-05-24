#include <iostream>

using namespace std;

int t, h, w, n, x, y;

int main()
{
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> h >> w >> n;
		x = n % h;
		y = n / h + 1;

		if (x == 0) {
			x = h;
			y -= 1;
		}

		cout << x * 100 + y << "\n";
	}

	return 0;
}