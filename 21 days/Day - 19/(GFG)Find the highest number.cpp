#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findPeakElement(vector<int>& temp){
    int ans = temp[0], n = temp.size();
    
    for(int i = 1; i < n; i++){
        if(temp[i] < ans){
            break;
        }
        ans = temp[i];
    }
    
    return ans;
}
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}
