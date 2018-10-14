#include<stack>
#include<iostream>
using namespace std;
int main()
{
	stack <char> stk;
	char c;
	int sum = 0;
	while(cin>>c)
	{
		if(c-0>=48&&c-0<=57)
		{
			stk.push(c-48);
		}
		else if(c-0==43)
		{
			char a,b;
			a=stk.top();
			stk.pop();
			b=stk.top();
			stk.pop();
			sum+=a+b;
			cout<<sum<<endl;
		}
		else if(c-0==45)
		{
			char a,b;
			a=stk.top();
			stk.pop();
			b=stk.top();
			stk.pop();
			sum+=a-b;
			cout<<sum<<endl;
		}
		
		
	}
	return 0;
}
