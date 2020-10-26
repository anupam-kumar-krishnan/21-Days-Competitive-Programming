#include <bits/stdc++.h>
using namespace std;


bool is_k_palin(string s,int k);

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s ;
		cin>>s;
		int k;
		cin>>k;
		
		cout<<is_k_palin(s,k)<<endl;
	}
	return 0;




string rev(string s){
    int n = s.size()-1;
    
    string ans = "";
    
    while(n >= 0){
        ans += s[n];
        n--;
    }
    
    return ans;
}


bool is_k_palin(string s,int k)
{

    int n = s.size(), maxi = 0;
    
    string revs = rev(s);
    
    vector<vector<int> > temp(n+1, vector<int>(n+1, 0));
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(s[i-1] == revs[j-1]){
                temp[i][j] = 1 + temp[i-1][j-1];
            }
            else{
                temp[i][j] = max(temp[i-1][j], temp[i][j-1]);
            }
            maxi = max(temp[i][j], maxi);
          
        }
       
    }
    
    if(n-maxi <= k){
        return true;
    }
    
    return false;
}
