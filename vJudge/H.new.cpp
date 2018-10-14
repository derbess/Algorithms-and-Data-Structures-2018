#include<iostream>
#include<sstream>
#include<cmath>
#include<stack>
using namespace std;
int stoi(string c)
{
	int s=0;
	for(int i=0;i<c.size();i++)
	{
		s+=(c[i]-48)*pow(10,c.size()-i-1);
	}
	return s;
}
int main()
{

	string s;
	stack <int> stk;
	getline(cin,s);
	string k;
	stringstream ss;
	ss<<s;
	while(ss>>k)
	{
		if(k=="+"||k=="-"||k=="*")
		{
			int a,b,ans=0;
			a=stk.top();
			stk.pop();
			b = stk.top();
			stk.pop();
			if(k=="+")
			{
				ans=a+b;
			}
			else if(k=="-")
			{
				ans = b-a;
			}
			else if(k=="*")
			{
				ans = a*b;
			}
			stk.push(ans);
			
		}
		else
		{
			stk.push(stoi(k));
		}
		
	}
	cout<<stk.top();
	return 0;
	
}
