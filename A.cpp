#include<iostream>
#include<deque>

using namespace std;
deque<int> deq;
deque<int> seq;
int main()
{
	int n,a;
	int cnt = 0;
	cin>>n;
	bool ok = false;
	for(int i=1;i<=n;i++)
	{
		cin>>a;
		deq.push_back(a);
	}
	cout<<endl;
	cout<<"Derbes Blya Krasavchik"<<endl;
	a = deq.size();
	while(cnt<a)
    {
	    seq.push_back(deq.back());
	    deq.pop_back();
	    cnt++;
	}
	while(seq.size()!=0)
	{
		deq.push_front(seq.front());
		seq.pop_front();
	}
	while(deq.size()!=0)
	{
		cout<<deq.front()<<" ";
		deq.pop_front();
	}
	return 0;
  	
}
