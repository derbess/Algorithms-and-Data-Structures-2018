#include<iostream>
using namespace std;
int main()
{
	string s;
	int a=0,z=0;
	scanf("%s",&s);
	for(int i =0;i<s.size();i++)
	{
		if(s[i]=='a')
		a++;
		if(s[i]=='z')
		z++;
		
	}
	printf("%i:%i",a,z);
}
