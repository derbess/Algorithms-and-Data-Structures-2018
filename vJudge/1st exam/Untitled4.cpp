#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<deque>
#include<algorithm>
#include<cmath>


using namespace std;
stack <char> stk;
int main()
{
		int n;
		string s;
		bool swt = false;
		cin>>n;
		for(int i =1;i<=n;i++)
		{
			cin>>s;
			for(int j=0;j<s.size();j++)
			{
				if(s[j]=='('||s[j]=='['||s[j]=='{')
				{
					stk.push(s[j]);
				}
				else if(stk.size()!=0)
				{
					if(stk.top()=='('&&s[j]==')')
					{
						stk.pop();
					}
					else if(stk.top()=='{'&&s[j]=='}')
					{
						stk.pop();
					}
					else if(stk.top()=='['&&s[j]==']')
					{
						stk.pop();
					}
					else 
					{
					cout<<"NO"<<endl;
					swt=true;
					break;
					}
				}
				else if(stk.size()==0&&(s[j]=='}'||s[j]==']'||s[j]==')'))
				{
					cout<<"NO"<<endl;
					swt=true;
					break;
				}
				
			}
			if(swt!=true&&stk.size()==0)
			{
				cout<<"YES"<<endl;
				
			}
			else if(swt==true)
			{
				
			}
			else if(stk.size()!=0)
			{
				cout<<"NO"<<endl;
				
			}
			swt=false;
			while(stk.size()!=0)
			{
				stk.pop();
			}
			
		}
		return 0;
}
