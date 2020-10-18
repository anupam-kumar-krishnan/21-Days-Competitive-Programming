#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int countZeroes(int arr[], int n) {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==0)
            {cnt++;}
        }
    return cnt;    
        
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countZeroes(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
