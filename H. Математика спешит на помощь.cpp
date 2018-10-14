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
		if(i%2==0)
		{
			a[++q]=s[i]-48;
		}
	}
	sort(a+1,a+q+1);
	
	for(int i=0;i<=s.size()-1;i++)
	{
		if(i%2==0)
		{
			cout<<a[++j];
		}
		else cout<<"+";
	}
	return 0;
}
