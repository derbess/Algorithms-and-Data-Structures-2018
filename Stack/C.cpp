#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
	int n,m,k;
	string s;
	queue <int> stk;
	bool t=true;
	
	while(t)
	{
		cin>>s;
		if(s=="push")
		{
			cin>>n;
			stk.push(n);
			cout<<"ok";
		}
		else if(s=="size")
		{
			cout<<stk.size();
		}
		else if(s=="clear")
		{
			while(stk.size()!=0)
			{
				stk.pop();
			}
			cout<<"ok";
		}
		else if(s=="front")
		{
			if(stk.size()==0)
			{
				cout<<"error";
			}
			else cout<<stk.front();
		}
	/*	else if(s=="back")
		{
			if(stk.size()==0)
			{
				cout<<"error";
			}
			else cout<<stk.back();
		}*/
		else if(s=="pop")
		{
			if(stk.size()==0)
			{
				cout<<"error";
			}
			else 
			{
				cout<<stk.front();
				stk.pop();
			}
		}
		else if(s=="exit")
		{
			t=false;
			cout<<"bye";
		}
		cout<<endl;
	}
}
