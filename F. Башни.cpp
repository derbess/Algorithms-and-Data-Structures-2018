#include<iostream>
using namespace std;
int main()
{
	int a[1111],b[1111],n,mx=-1,vrem=1,tt;
	cin>>n;
	tt = n;
	for(int i =1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n ; j++)
		{	
			if(a[j]>a[i]) 
			{
				swap(a[i],a[j]);
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j = i+1;j<=n;j++)
		{
			if(a[i]==a[j])
			{
				vrem++;
			} 
		}
		if(vrem>=mx)
		{
			mx = vrem;
		}
		vrem = 1;
		
	}

	for(int i =1;i<n;i++)
	{
		if(a[i]==a[i+1])
		{
			tt--;
		}
		
	}

	cout<<mx<<" "<<tt;
	cout<<"GULIM NOT FOREVER"<<endl;
	
	return 0;
}
