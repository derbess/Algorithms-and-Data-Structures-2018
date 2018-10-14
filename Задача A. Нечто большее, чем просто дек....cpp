#include<iostream>
#include<deque>
#include<string>
using namespace std;
deque<int> deq;
int main () 
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	long long int n,m,cnt=0;
	string s;
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		cin>>s;
		if(s=="push_back")
		{
			cin>>m;
			if(cnt%2==0)
			{
				deq.push_back(m);
			}
			else if(cnt%2!=0)
			{
				deq.push_front(m);
			}
		}
		else if(s=="push_front")
		{
			cin>>m;
			if(cnt%2!=0)
			{
				deq.push_back(m);
			}
			else if(cnt%2==0)
			{
				deq.push_front(m);
			}
		}
		else if(s=="front")
		{
			if(deq.size()==0)
			{
				cout<<";("<<endl;
			}
			else if(cnt%2==0)
			{
				cout<<deq.front()<<endl;
				deq.pop_front();
			}
			else if(cnt%2!=0)
			{
				cout<<deq.back()<<endl;
				deq.pop_back();
			}
		}
		else if(s=="back")
		{
			if(deq.size()==0)
			{
				cout<<";("<<endl;
			}
			else if(cnt%2!=0)
			{
				cout<<deq.front()<<endl;
				deq.pop_front();
			}
			else if(cnt%2==0)
			{
				cout<<deq.back()<<endl;
				deq.pop_back();
			}
		}
		else if(s=="reverse")
		{
			cnt++;
		}
	}	
	return 0;

}

