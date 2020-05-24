#include <iostream>
#include <string>

using namespace std;

string input;
int stk, result;

int main() {
	cin >> input;

	for (int i = 0; i < input.size() - 1; i++)
	{
		if (input[i] == '(') {
			if (input[i + 1] == ')') {
				result += stk;
				++i;
			}
			else {
				++stk;
				++result;
			}
		}
		else
			--stk;
	}

	cout << result;

	return 0;
}