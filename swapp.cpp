#include<iostream>
using namespace std;
int a,b;
void sss()
{
	int r=0;
	r = a;
	a = b;
	b = r;
}
int main()
{
	//int a,b;
	cin>>a>>b;
	sss();
	cout<<a<<" "<<b;
	return 0;
	
}
