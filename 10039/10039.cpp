#include <iostream>

using namespace std;

int stu[5], sum;

int main() { 
	for (int i = 0; i < 5; i++) {
		cin >> stu[i];

		if (stu[i] < 40)
			stu[i] = 40;

		sum += stu[i];
	}

	cout << sum / 5 << "\n";

	return 0;
}