#include <iostream>

using namespace std;

bool num[10001];
int temp;

int d(int n) {
	int sum = 0, ncpy = n;

	while (ncpy) {
		sum += ncpy % 10;
		ncpy /= 10;
	}

	n += sum;
	
	return n;
}

int main() {
	for (int i = 1; i < 10001; i++) {
		if (num[i] == 0) {
			for (int j = i; j < 10001; j = temp) {
				temp = d(j);
				num[temp] = 1;
			}
		}
	}

	for (int i = 1; i < 10001; i++)
		if (num[i] == 0)
			cout << i << endl;

	return 0;
}