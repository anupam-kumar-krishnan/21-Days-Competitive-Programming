#include<bits/stdc++.h> 
using namespace std; 

int multiply(int array[], int n) 
{ 
	int pro = 1; 
	for (int i = 0; i < n; i++) 
		pro = pro * array[i]; 
	return pro; 
} 

int main() 
{ 
	int n;
  int arr[n];
	 for (int i = 0; i < n; i++) 
   {
     cin>>arr[i];
	 }
	cout << multiply(array, n); 
	return 0; 
} 
