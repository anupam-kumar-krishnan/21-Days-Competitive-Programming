#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t, n;
	int exp;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		if (n == 0)
			cout << "NO\n";
		else if (n == 1)
			cout << "YES\n";
		else {
			exp = ceil(log(n) / log(2));
			if (n == pow(2, exp) - 1)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	}

	return 0;
}
