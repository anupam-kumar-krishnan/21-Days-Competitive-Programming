#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	void printArray(int arr[], int n) 
        {
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	}
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.printArray(arr, n);
        cout << "\n";
    }
    return 0;
}
