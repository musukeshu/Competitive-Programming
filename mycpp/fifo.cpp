#include<iostream>
using namespace std;
int main()
{
	int i,j,count=0,hit=0,s[100],p[100],n,pf;
	cout<<"Enter the number of page frames\n";
	cin>>pf;
	for(i=0;i<pf;i++)
	{
		p[i]=-1;
	}
	cout<<"Enter the number of page reference in the sequence\n";
	cin>>n;
	cout<<"Enter the sequence\n";
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<n;i++)
	{
		hit=0;
		for(j=0;j<pf;j++)
		{
			if(s[i]==p[j])
			{
				hit=1;
				break;
			}
		}
		cout<<"For Page "<<s[i]<<": ";
		if(hit==1)
		{
			cout<<"NO Page fault occured\n";
		}
		else
		{
			for(j=0;j<pf-1;j++)
			{
				p[j]=p[j+1];
			}
			p[j]=s[i];
			count++;
			for(j=0;j<pf;j++)
			{
				if(p[j]!=-1)
				cout<<p[j]<<"  ";
			}
		}
		cout<<"\n";
	}
	cout<<"Total number of page faults are : "<<count<<"\n";
	return 0;
}