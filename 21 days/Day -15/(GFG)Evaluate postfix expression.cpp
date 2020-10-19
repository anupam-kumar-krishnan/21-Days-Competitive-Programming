#include <iostream>
#include <stack>

using namespace std;

int main() {
	int t, a, b, res;
	stack <int> s;

	cin >> t;
	while (t--) {
		string exp;
		cin >> exp;
		for (char c : exp) {
			if (isdigit(c)) {
				s.push(c - '0');
			}
			else {
				b = s.top();
				s.pop();
				a = s.top();
				s.pop();
				switch(c) {
					case '+': res = a + b;
							break;
					case '-': res = a - b;
							break;
					case '*': res = a * b;
							break;
					case '/': res = a / b;
							break;
				}
				s.push(res);
			}
		}
		cout << s.top() << '\n';
		s.pop();
	}

	return 0;
}
