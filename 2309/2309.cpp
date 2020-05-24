#include <iostream>

using namespace std;

int nanjang[9];
int temp;
const int SIZE = 9;

int isNanjang(int idx1, int idx2);
void PrintNanjang(int idx1, int idx2);
void Ascending(int idx1, int idx2);

int main() {
	for (int i = 0; i < SIZE; i++) {
		cin >> nanjang[i];
	}

	for (int i = 0; i < SIZE; i++) {
		for (int j = i + 1; j < SIZE; j++) {
			if (isNanjang(i, j) == 100) {
				Ascending(i, j);
				PrintNanjang(i, j);
				return 0;
			}
		}
	}

	return 0;
}

int isNanjang(int idx1, int idx2) {
	int sum = 0;

	for (int i = 0; i < SIZE; i++)
		if (i != idx1 && i != idx2)
			sum += nanjang[i];
		
	return sum;
}

void PrintNanjang(int idx1, int idx2) {
	for (int i = 2; i < SIZE; i++)
		cout << nanjang[i] << "\n";
}

void Ascending(int idx1, int idx2) {
	nanjang[idx1] = -1;
	nanjang[idx2] = -1;

	for (int i = 0; i < SIZE; i++) {
		for (int j = i + 1; j < SIZE; j++) {
			if (nanjang[i] > nanjang[j]) {
				temp = nanjang[i];
				nanjang[i] = nanjang[j];
				nanjang[j] = temp;
			}
		}
	}
}