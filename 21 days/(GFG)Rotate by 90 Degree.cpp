#include <iostream>
using namespace std;

int main() {
	int t;
	int n;

	cin >> t;
	for (int x = 0; x < t; x++) {
		cin >> n;
		int m[n][n];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cin >> m[i][j];
			}
		}

		for (int j = n - 1; j >= 0; j--) {
			for(int i = 0; i < n; i++) {
				cout << m[i][j] << ' ';
			}
		}
		cout << '\n';
	}

	return 0;
}
