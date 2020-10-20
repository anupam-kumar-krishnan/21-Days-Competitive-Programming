#include<bits/stdc++.h>
using namespace std;

int getMinPetrolRequired(int arr[], int n, int k) {

    int refill = 0;

    for (int i = 0; i < n; ++i) {

        if (arr[i] > k) {
            refill += arr[i] - k;
            k = arr[i];
        }

    }

    if (refill == 0)
        return -1;
    else
        return refill;
}

int main() {

	int t;
    cin >> t;
    while (t--) {

        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];

        int res = getMinPetrolRequired(arr, n, k);
        cout << res << '\n';

    }

	return 0;
}
