#include<iostream>
#include<sstream>
#include<cmath>
#include<stack>
#include<deque>
#include<queue>
using namespace std;
deque<int> deq;
stack<int> stk;
queue<int> que1;
queue<int> que2;
int main()
{
	int n,k=0;
	int p1,p2;
	for(int i = 1;i<=5;i++)
	{
		cin>>n;
		que1.push(n);
	}
	for(int i = 1;i<=5;i++)
	{
		cin>>n;
		que2.push(n);
	}
	while(que1.size()!=0&&que2.size()!=0)
	{
		p1 = que1.front();
		que1.pop();
		p2 = que2.front();
		que2.pop();
		if(p1==0&&p2==9)
		{
			que1.push(p1);
			que1.push(p2);
		}
		else if(p1==9&&p2==0)
		{
			que2.push(p1);
			que2.push(p2);
		}
		else if(p1>p2)
		{
			que1.push(p1);
			que1.push(p2);
		}
		else if(p1<p2)
		{
			que2.push(p1);
			que2.push(p2);
		}
		k++;
		if(k==1000000)
		{
			cout<<"botva";
			return 0;
		}
	}
	if(que1.size()==0)
	{
		cout<<"second "<<k;
	}
	else cout<<"first "<<k;
	return 0;	
}
