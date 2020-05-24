#include <iostream>

using namespace std;

int t, k, n;
int apart[15][15];

int main() {
	cin >> t;

	for (int i = 1; i < 15; i++)
		apart[0][i] = i;

	for (int i = 1; i < 15; i++)
		for (int j = 1; j < 15; j++)
			apart[i][j] = apart[i - 1][j] + apart[i][j - 1];

	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		cout << apart[k][n] << "\n";
	}

	return 0;
}