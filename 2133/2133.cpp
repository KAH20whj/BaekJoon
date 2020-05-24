#include <iostream>

using namespace std;

int dp[31];

int main() {
	int n;
	cin >> n;

	if (n % 2 == 0) {
		dp[2] = 3;
		for (int i = 2; i <= n; i += 2) {
			if (i % 4 == 0) dp[i] = dp[i - 2] * 3	;
			else dp[i] = ;
		}
	}

	return 0;
}