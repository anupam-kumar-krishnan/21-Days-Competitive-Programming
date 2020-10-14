#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	
	return 0;
}



int findEquilibrium(int A[], int n){
    if(n == 1){
        return 0;
    }
    
    for(int i = 1; i < n; i++){
        A[i] = A[i] + A[i-1];
    }
    
    for(int i = 0; i < n; i++){
        if(i == 0){
            if(A[n-1] - A[0] == 0){
                return 0;
            }
        }
        else if(i == n-1){
            if(A[n-2] == 0){
                return n-1;
            }
        }
        else{
            if(A[i-1] == (A[n-1] - A[i])){
                return i;
            }
        }
    }
    
    return -1;
}
