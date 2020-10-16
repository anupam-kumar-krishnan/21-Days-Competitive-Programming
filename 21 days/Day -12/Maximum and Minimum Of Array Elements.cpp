#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    int maxt=A[0];
	    int mint=A[0];
	    
	    for(int i=0;i<n;i++)
	    {
	        if(A[i]>maxt)
	        {
	            maxt=A[i];
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(A[i]<mint)
	        {
	            mint=A[i];
	        }
	    }
	    cout<<maxt<<" "<<mint<<endl;
	}
	return 0;
}
