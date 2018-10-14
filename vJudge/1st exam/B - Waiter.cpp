#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<deque>
#include<algorithm>
#include<cmath>


using namespace std;
stack <int> stk;
queue<int> que;
queue<int> qq;
void qwe()
{
	while(que.size()!=0)
	{
		int u = que.front();
		que.pop();
		stk.push(u);
	}
}
int main()
{
		int primes[11111];
		int MAX_PRIME = 9733;
		int k = 1;
		primes[1] = 2;
		primes[2] = 3;
		for (int i = 3; i <= MAX_PRIME; i++)
		{
			bool ok = true;
			for (int j = 2; j <= (int)sqrt(i); j++)
			 {
				if (i % j == 0)
				ok = false;
			}
			if (ok)
			 {
				k++;
				primes[k] = i;
			}
		}
		int n,v,it,y;
		cin>>n>>it;
		y=n;
		for(int i =1;i<=n;i++)
		{
			cin>>v;
			que.push(v);
		}
		for(int i=1;i<=it;i++)
		{
			for(int j=1;j<=y;j++)
			{
				int p = que.front();
				que.pop();
				if(p%primes[i]==0)
				{
					qq.push(p);
					
				}
				else que.push(p);
			}
			y=que.size();
		}
		
		while(qq.size()!=0)
			{
				cout<<qq.front()<<endl;
				qq.pop();
			}
			qwe();
			while(stk.size()!=0)
			{
				cout<<stk.top()<<endl;
				stk.pop();
			}
		
		
		return 0;
}
