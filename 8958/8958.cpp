#include <iostream>
#include <string>

using namespace std;

int main() {
	string ox;
	int n, sum, cnt;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> ox;
		sum = 0;
		cnt = 0;
		for (int j = 0; j < ox.length(); j++) {
			if (ox[j] == 'O')
				sum += ++cnt;
			else
				cnt = 0;
		}
		cout << sum << endl;
	}

	return 0;
}