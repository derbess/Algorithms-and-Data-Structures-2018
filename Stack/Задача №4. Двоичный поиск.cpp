#include <bits/stdc++.h>
using namespace std;

long long int n,m,a[111111],l,r,v,u;
int bisearch(int l,int r,int v)
{
	while(l<r)
		{
			int m=(l+r)/2;
			if (a[m]<v) l=m+1;
			else r=m;
		}
		return r;
}
int main()
{
	
	cin>>n>>m;
	for(int i =1;i<=n;i++)
	{
		cin>>a[i];
	}	
	for(int i =1;i<=m;i++)
	{
		cin>>v;
		l = 1;
		r = n;
		int index = bisearch(l,r,v);
	//	cout<<index<<"<<<<<<"<<endl;
		if(a[index]==v) cout<<"YES";
		else cout<<"NO";
		cout<<endl;
	}
}
