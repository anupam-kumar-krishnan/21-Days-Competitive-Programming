#include <iostream>
#include<algorithm>
#include<cstdio>

using namespace std;  

int max_Books(int[], int, int);     
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
  	int n,k;
  	cin>>n>>k;
  	int ar[n];
  	for(int i=0;i<n;i++)
  	{
  		cin>>ar[i];
  	}
        	cout<<max_Books(ar,n,k)<<endl;
        
  }    
  return 0;
}


 
    int max_Books(int a[], int n, int k)
{
    int i = 0, ans = 0, temp = 0;
    
    while(i < n){
        if(a[i] <= k){
            temp += a[i];
        }
        else{
            temp = 0;
        }
        ans = max(ans, temp);
        i++;
    }
    
    return ans;
}
