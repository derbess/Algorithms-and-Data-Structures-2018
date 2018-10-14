#include<iostream>
#include<cstdio>
#include<stack>
#include<queue>
#include<deque>
#include<algorithm>
#include<cmath>


using namespace std;
stack <char> stk;
deque <int> deq;
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
		int t,n,m,v,sum=0;
		string s;
		bool swt=false;
		cin>>t;
		for(int i=1;i<=t;i++)
		{
			cin>>n>>m;
			cout<<"Case "<<i<<":"<<endl;
			for(int j=1;j<=m;j++)
			{
				cin>>s;
				
					if(s=="pushLeft")
					{	
						cin>>v;
						if(sum==n)
						{
							cout<<"The queue is full";
						}
						else
						{	
							deq.push_back(v);
							cout<<"Pushed in left: "<<v;
							sum++;
						}
						cout<<endl;
						swt=true;
					}
					else if(s=="pushRight")
					{
						cin>>v;
						if(sum==n)
						{
							cout<<"The queue is full";
						}
						else
						{	
							deq.push_front(v);
							cout<<"Pushed in right: "<<v;
							sum++;
						}
						
						cout<<endl;
						swt=true;
					}
					else if(s=="popLeft")
					{
						if(deq.size()!=0)
						{
						cout<<"Popped from left: "<<deq.back();
						deq.pop_back();
						sum--;
						if(sum<0) sum=0;
						}
						else cout<<"The queue is empty";
						cout<<endl;
						swt=true;
						
					}
					else if(s=="popRight")
					{
						if(deq.size()!=0)
						{
							cout<<"Popped from right: "<<deq.front();
							deq.pop_front();
							sum--;
							if(sum<0) sum=0;
						}
						else cout<<"The queue is empty";
						cout<<endl;
						swt=true;	
					}
			}
			sum=0;
			while(deq.size()!=0)
			{
				deq.pop_back();
			}
		}
		return 0;
}
