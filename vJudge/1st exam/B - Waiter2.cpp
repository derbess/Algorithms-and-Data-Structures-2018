#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<deque>
#include<algorithm>
#include<cmath>


using namespace std;
stack <int> stk;
stack <int> ske;
queue <int> que;
stack <int> pust;
stack <int> qq;
stack <int> ww;
stack <int> tt;

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
			ske.push(v);
		}
		for(int i=1;i<=it;i++)
		{
			for(int j=1;j<y;j++)
			{
				if(ske.top()%primes[i]==0) 
				{
					stk.push(ske.top());
				}
				else pust.push(ske.top());
				ske.pop();
			}
			while(pust.size()!=0)
			{
				ske.push(pust.top());
				pust.pop();
			}
			while(stk.size()!=0)
			{
				que.push(stk.top());
				stk.pop();
			}
			
			
		}
		
		while(que.size()!=0)
		{
			cout<<que.front()<<endl;
			que.pop();
		}
		while(ske.size()!=0)
		{
			cout<<ske.top()<<endl;
			ske.pop();
		}
		
		
		
		return 0;
}
