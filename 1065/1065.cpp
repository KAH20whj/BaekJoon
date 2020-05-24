#include <iostream>

using namespace std;

bool hansoo(int n) {
	if (n < 100)
		return true;
	else {
		int hun, ten, one;
		hun = n / 100;
		ten = (n % 100) / 10;
		one = n % 10;
		if ((hun - ten) == (ten - one))
			return true;
		else
			return false;
	}
}

int main() {
	int n, cnt = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (hansoo(i))
			++cnt;
	}

	cout << cnt;

	return 0;
}