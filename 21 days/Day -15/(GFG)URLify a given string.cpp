#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, k;

	cin >> t;
	while (t--) {
		string str;
		cin.ignore();
		getline(cin, str, '\n');
		cin >> k;

		str.erase(0, str.find_first_not_of(' '));
	
		str.erase(str.find_last_not_of(' ') + 1);

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == ' ') {
				str.replace(i, 1, "%20");
				i += 2;
			}
		}
		cout << str << '\n';
	}
    return 0;
}
