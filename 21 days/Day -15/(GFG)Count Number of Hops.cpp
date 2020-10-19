#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int t, n;
	int ways[51];

	memset(ways, 0, sizeof(ways));
	ways[0] = 1;
	ways[1] = 1;
	ways[2] = 2; //1+1, 2

	for (int i = 3; i <= 50; i++) {
		ways[i] = ways[i-1] + ways[i-2] + ways[i-3];
	}

	cin >> t;
	while (t--) {
		cin >> n;
		cout << ways[n] << '\n';
	}

	return 0;
}
