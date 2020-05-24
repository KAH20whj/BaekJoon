#include <iostream>

using namespace std;

int stu[1000];

int main() {
	int c, n, sum, ave, over;
	double per;
	cin >> c;

	for (int i = 0; i < c; i++) {
		sum = 0;
		over = 0;

		cin >> n;

		for (int j = 0; j < n; j++) {
			cin >> stu[j];
			sum += stu[j];
		}

		ave = sum / n;

		for (int j = 0; j < n; j++)
			if (ave < stu[j])
				++over;

		per = (double)over / n * 100;

		cout << fixed;
		cout.precision(3);
		cout << per << endl;
	}


	return 0;
}