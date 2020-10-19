#include <iostream>
using namespace std;

int main() {
	int t, n;

	cin >> t;
	while (t--) {
		cin >> n;

		string base1 = "1";
		string base2 = "11";

		if (n == 1) {
			cout << base1 << '\n';
		}
		else if (n == 2) {
			cout << base2 << '\n';
		}
		else {
			string res;
			string base = base2;
			for (int i = 3; i <= n; i++) {
				res = "";
				int len = base.length();
				int count = 1;
				for (int j = 1; j < len; j++) {
					if (base[j] == base[j-1]) {
						count += 1;
					}
					else {
						res += count + '0';
						res += base[j-1];
						count = 1;
					}
				}
				res += count + '0';
				res += base[len-1];
				base = res;
			}
			cout << res << '\n';
		}
	}

	return 0;
}
