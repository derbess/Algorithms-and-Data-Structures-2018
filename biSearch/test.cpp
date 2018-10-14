#include<iostream>
using namespace std;
int main()
{
	int x,y,i,j;
	cin>>i>>j;
	x=i<j?i:j;
	y=i>j?i:j;
	cout<<x<<" "<<y;
	return 0;
}
