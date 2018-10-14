#include<iostream>
#include<queue>
#include<utility>
//#include<>
using namespace std;
typedef struct pair<string,int> qq;
int n,q;
string s;
qq a;
int t,sum,ans;
queue <qq> que;
int main()
{
	
	cin>>n>>q;
	for(int i =1;i<=n;i++)
	{
		cin>>s>>t;
		a=make_pair(s,t);
		que.push(a);
	}
	while(que.size()!=0)
	{
		int mean = (que.front()).second;
		if(mean<=q)
		{
			ans+=mean;
			cout<<(que.front().first)<<" "<<ans<<endl;
			que.pop();
		}
		else if(mean>q)
		{
			ans+=q;
			string first=(que.front().first);
			int second = (que.front().second)-q;
			que.pop();
			qq nez=make_pair(first,second);
			que.push(nez);
		}
	}
	return 0;
}
