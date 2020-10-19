#include <iostream>
#include <vector>

using namespace std;

struct Record {
	string name;
	int marks1;
	int marks2;
	int marks3;
	int avgMarks;
};

int main() {
	int t, n, m1, m2, m3, avg;
	
	vector <Record> v;

	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			string str;
			cin >> str;
			cin >> m1 >> m2 >> m3;
			struct Record rec = {str, m1, m2, m3, (m1+m2+m3)/3};
			v.push_back(rec);
		}

		int maxAvg = v[0].avgMarks;
		for (int i = 1; i < n; i++) {
			if (v[i].avgMarks > maxAvg) {
				maxAvg = v[i].avgMarks;
			}
		}

		for (int i = 0; i < n; i++) {
			if (v[i].avgMarks == maxAvg) {
				cout << v[i].name << ' ';
			}
		}
		cout << maxAvg << '\n';

		v.clear();
	}

	return 0;
}
