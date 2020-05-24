#include <iostream>

using namespace std;

char n[5][16];

int main() {

	for (int i = 0; i < 5; i++)
		cin >> n[i];

	for (int i = 0; i < 16; i++)
		for (int j = 0; j < 5; j++)
			if (n[j][i] != NULL)
				cout << n[j][i];

	return 0;
}