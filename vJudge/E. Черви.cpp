#include<iostream>
#include<algorithm>
using namespace std;
long long int a[111111],q,b[1111],j=0;
typedef pair<int,int> dual;
dual lr[111111];
int bs(int l, int r, int x) 
{ 
   if (r >= l) 
   {
        int mid = l + (r - l)/2;
        if(x>=lr[mid].first&&x<=lr[mid].second)
        {
        	return mid;
		}
		 if (lr[mid].second > x)  
            return bs(l, mid-1, x); 
        return bs(mid+1, r, x); 
   } 
}
int main()
{

	int l=0,r=0,ll=0,rr=0;
	int n,m;
	cin>>n;
	ll = 0;
	rr = 0;
	lr[0] = make_pair(ll,rr);
	a[0]=0;
	for(int i = 1;i <= n; i++)
	{
		cin>>a[i];
		l = lr[i-1].second + 1;
		r = lr[i-1].second + a[i];
		lr[i] = make_pair(l,r);
	}
/*	for(int i = 1;i <= n; i++)
	{
		cout<<lr[i].first<<" "<<lr[i].second<<endl;
		//lr[i] = make_pair(l,r);
	}*/
	cin>>m;
	for(int i = 1;i<=m;i++)
	{
		cin>>q;
		cout<<bs(1,n,q)<<endl;
	}
	return 0;
}
