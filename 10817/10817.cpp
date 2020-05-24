#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int num[3];

	for (auto& i : num) {
		cin >> i;
	}

	sort(num, num + 3);

	cout << num[1];

	return 0;
}