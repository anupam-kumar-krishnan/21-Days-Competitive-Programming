#include<bits/stdc++.h>
using namespace std;

string findCamel(string s) {
    string res="";
    for(int i=0;i<s.length();i++)
        if(s[i]>='A' && s[i]<='Z')
            res+=s[i];

   return res;
}

int lcsq(string X, string Y) {
    for(int i=0;i<X.length();i++)
        if(X[i]!=Y[i])
            return false;

   return true;
}

int main()
 {
	int t;
	cin>>t;
	while(t--) {

	    int n;
	    cin>>n;
	    map<string,vector<string>> mp;

	    for(int i=0;i<n;i++) {

	        string temp;
	        cin>>temp;

	        string temp2=findCamel(temp);
	        mp[temp2].push_back(temp);
	   }

	    string pattern;
	    cin>>pattern;
	    int flag=0;

	    for(auto i=mp.begin();i!=mp.end();i++) {
	        vector<string> v=i->second;
	        if(lcsq(pattern,i->first))
	            for(int j=0;j<v.size();j++) {
	                cout<<v[j]<<" ";
	                flag=1;
	            }
	    }

	    if(!flag)
	        cout<<"No match found";

	    cout<<endl;
	}
	return 0;
}
