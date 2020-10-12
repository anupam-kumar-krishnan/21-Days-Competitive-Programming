#include <bits/stdc++.h>
using namespace std;

class Solution{


	public:
	int minNum(long long int arr[],int n)
	{
	   
	   int odd = 0; 
       for (int i = 0; i < n; i++)  
        if (arr[i] % 2) 
            odd += 1; 
      
   return (odd % 2)? 1 : 2; 
} 
};
	


int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	 int n;
        cin>>n;
        
        long long a[n];
        for(int i=0; i<n; i++)
            cin>>a[i];
        
        Solution ob;
	    	cout << ob.minNum(a, n);
        
	    cout << "\n";
	     
    }
    return 0;
}
