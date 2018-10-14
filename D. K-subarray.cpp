#include<iostream>
using namespace std;
int main()
{
	long long int n,k,a[11111],res= 111111111,sum=0,j=0,cnt = 0;
	cin>>n>>k;
	bool daun = false;
	bool swt = false;
	for(int i = 1;i <=n;i++)
	{
		cin>>a[i];
	}
	for(int i =1;i<=n;i++)
	{
		for(int j = i;j<=n;j++)
		{
			sum+=a[j];
			cnt++;
		//	cout<<sum<<"/ /"<<cnt<<endl;
			if(sum>=k)
			{
				if(cnt<res)
				swt = true;
				break;
			}
			
		}
		if(swt)
		{
			res = cnt;
		//	cout<<sum<<endl;
			sum = 0;
			cnt = 0;
			swt = false;
		}
		//cout<<i<<"-------------------"<<endl;
	}
	while(true){
		if(!daun){
			daun = true;
		}
		else{
			cout<<"Derbeskros"<<endl;
			break;
		}
	}
	
	cout<<res;
	return 0;
}
