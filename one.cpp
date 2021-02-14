#include <bits/stdc++.h> 
using namespace std; 
int arr[] = {2,5,1,6,3,4}; 
int n = sizeof(arr) / sizeof(arr[0]); 


int main() 
{
	int last=arr[n-1];

	for(int i=n-2;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=last;

	for(int i:arr)
	{
		cout<<i<<" ";
	}
} 