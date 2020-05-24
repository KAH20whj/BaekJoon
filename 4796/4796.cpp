#include <iostream>

using namespace std;

int a, l, p, v, result;

int main() {
	while (1) {
		cin >> l >> p >> v;
		if (!l && !p && !v) break;
		result = l * (v / p) + ((v % p) > l ? l : (v % p));
		cout << "Case " << ++a << ": " << result << "\n";
	}
	return 0;
}