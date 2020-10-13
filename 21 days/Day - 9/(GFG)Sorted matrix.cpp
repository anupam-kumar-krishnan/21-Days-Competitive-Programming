#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {

	int t, n, e;
	vector <int> v;

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		int size = pow(n, 2);
		for (int j = 0; j < size; j++) {
			cin >> e;
			v.push_back(e);
		}

		sort(v.begin(), v.end());

		for (int j = 0; j < size-1; j++) {
			cout << v[j] << ' ';
		}
		cout << v[size-1] << '\n';
		v.clear();
	}

	return 0;
}
