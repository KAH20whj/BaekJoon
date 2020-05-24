#include <iostream>
#include <string>

using namespace std;

int pos = -1;
int arr[10000];

class Stack {
private:
	int tmp;

public:
	void push() {
		cin >> tmp;
		arr[++pos] = tmp;
	}

	int pop() {
		if (empty()) return -1;
		else return arr[pos--];
	}

	int size() {	
		return pos;
	}

	int empty() {
		return pos == -1; 
	}

	int top() {
		if (empty()) return -1;
		else return arr[pos];
	}
};

int main() {
	Stack stk;
	int n;
	string cmd;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cmd;
		
		if (cmd == "push") stk.push();
		else if (cmd == "pop") cout << stk.pop() << "\n";
		else if (cmd == "size") cout << stk.size() << "\n";
		else if (cmd == "empty") cout << stk.empty() << "\n";
		else if (cmd == "top") cout << stk.top() << "\n";
	}

	return 0;
}

