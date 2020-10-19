#include <iostream>

using namespace std;

int main() {
	int t, n;
	int sum;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		sum = 0;
		while (true) {
			while (n > 0) {
				sum += n % 10;
				n /= 10;
			}
			if (sum < 10) 
				break;
			n = sum;
			sum = 0;
		}
		cout << sum << '\n';
	}

	return 0;
}
