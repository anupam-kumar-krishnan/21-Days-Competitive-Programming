#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int t, n;

	cin >> t;
	while (t--) {
		cin >> n;

		int ways[n+1];
		memset(ways, 0, sizeof(ways));

		ways[0] = 1;

		for (int i = 3; i <= n; i++) {
			ways[i] += ways[i-3];
		}

		for (int i = 5; i <= n; i++) {
			ways[i] += ways[i-5];
		}

		for (int i = 10; i <= n; i++) {
			ways[i] += ways[i-10];
		}

		cout << ways[n] << '\n';
	}

	return 0;
}
