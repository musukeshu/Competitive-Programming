#include<bits/stdc++.h>
using namespace std;
int main()
{
	long p,k;
	int flag=0;
	cin>>p;
	k=1;
	while(p!=0)
	{
		p=p-k;
		if(p<=0)
		{
			flag=1;
			break;
		}
		p=p-k*k;
		if(p<=0)
		{
			flag=0;
			break;
		}
		k++;
	}
	if(flag==1)
	{
		cout<<"Darshak\n";
	}
	else
		cout<<"Chandan\n";
	return 0;
}