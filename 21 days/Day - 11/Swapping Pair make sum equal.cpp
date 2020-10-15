include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t; while(t--){
        int n,m; cin>>n>>m;
        int a[n],b[m],sa=0,sb=0;
        for(int i=0; i<n; i++) { cin>>a[i]; sa+=a[i]; }
        for(int i=0; i<m; i++) { cin>>b[i]; sb+=b[i]; }
        int diff= abs(sa-sb) , c=0;
        set<int> ma;
        for(int i=0; i<n; i++) ma.insert(a[i]);
            for(int i=0; i<m; i++){
                if(ma.find(diff-b[i]) != ma.end()){
                    int temp=sa , temp2=sb;
                    temp=temp-(diff-b[i])+b[i];
                    temp2=temp2+(diff-b[i])-b[i];
                    if(temp==temp2) 
                    {
                        c=1;
                        break;
                    }
                
            }
           
        }
         if(c==1)cout<<1<<endl;
            else cout<<-1<<endl;
    }
}
