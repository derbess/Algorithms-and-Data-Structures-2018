#include<iostream>
#include<algorithm>
using namespace std;
int a[1111],q=0,b[1111],j=0;

int main()
{
	
	string s;
	cin>>s;
	for(int i=0;i<=s.size()-1;i++)
	{
		if(s[i]=='1')
		{
			a[1]++;
		}
		else if(s[i]=='2')
		{
			a[2]++;
		}
		else if(s[i]=='3')
		{
			a[3]++;
		}
	}
	for(int i=1;i<=a[1];i++)
	{
		cout<<a[1]<<"+";
	}
	for(int i=1;i<=a[2];i++)
	{
		cout<<a[2]<<"+";
	}
	for(int i=1;i<a[3];i++)
	{
		cout<<a[3]<<"+";
	}
	cout<<a[3];
	
	return 0;
}
