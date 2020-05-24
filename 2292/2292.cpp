#include <iostream>

using namespace std;

int main() {
	int n, cnt = 1;
	cin >> n;

	--n;
	while (n > 0) {
		n -= cnt * 6;
		++cnt;
	}
	cout << cnt;

	return 0;
}