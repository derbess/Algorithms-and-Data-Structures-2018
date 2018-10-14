#include<iostream>
using namespace std;
void swapping(int & a, int &  b)
{
	int c ;
	c = a;
	a = b;
	b = c;
}
int main()
{
	int n,cnt=0,max=0,amount=0;;
	cin>>n;
	int arr[n];
	for(int i=0; i<n ; i++)
	{
		cin>>arr[i];
	}
	for(int i = 0; i < n; i++)
	{
		for(int j=0; j< n ; j++)
		{	
			if(arr[j]>arr[i]) 
			{
				swapping(arr[i],arr[j]);
			}
		}
	}
	for(int i=0; i<n-1 ; i++)
	{
		if(arr[i]==arr[i+1]) 
		{
			cnt++;
		}
		if(cnt>max)
		{
			max = cnt;
		}
		if(arr[i]!=arr[i+1]) 
		{
			cnt=0;
		}
	}
	for(int i=0 ; i< n ; i++)
	{
		if(arr[i]!=arr[i+1])
		{
			amount++;
		}
	}
	cout<<max+1<<" "<<amount;
	return 0;
}
