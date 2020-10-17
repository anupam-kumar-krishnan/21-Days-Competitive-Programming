#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

int remAnagram(string str1, string str2);


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}



int remAnagram(string str1, string str2)
{
    map<char, pair<int, int> > m;
    
    for(int i = 0; i < str1.size(); i++){
        if(m.find(str1[i]) == m.end()){
            pair<int, int> p(1, 0);
            m[str1[i]] = p;
        }
        else{
            m[str1[i]].first++;
        }
    }

    for(int i = 0; i < str2.size(); i++){
        if(m.find(str2[i]) == m.end()){
            pair<int, int> p(0, 1);
            m[str2[i]] = p;
        }
        else{
            m[str2[i]].second++;
        }
    }

    map<char, pair<int, int> > :: iterator it = m.begin();
    
    int ans = 0;
    
    while(it != m.end()){
        ans += abs((it->second).first - (it->second).second);
        it++;
    }
    
    return ans;
}
