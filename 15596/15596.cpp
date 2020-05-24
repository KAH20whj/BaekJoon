#include <iostream>
#include <vector>

using namespace std;

long long sum(vector<int>& a) {
	long long ans = 0;

	for (int i = 0; i < a.size(); i++) {
		ans += a[i];
	}

	return ans;
}

int main() {
	int n, temp;
	vector<int> v;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	long long result = sum(v);
	cout << result;

	return 0;
}
	