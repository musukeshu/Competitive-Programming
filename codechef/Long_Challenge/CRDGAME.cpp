#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int t,n,i,m,c,summ,sumc,countc,countm;
	long int a[1001],b[1001];
	
	cin>>t;
	while(t--)
	{
			countc=0;
			countm=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			cin>>b[i];
			c=a[i];
			m=b[i];
			sumc=0;
			summ=0;
			while(c!=0)
			{
				sumc=sumc+c%10;
				
				c=c/10;
				
			}
			while(m!=0)
			{
				summ=summ+m%10;
				m=m/10;
			}
			if(sumc==summ)
			{
				countm+=1;
				countc+=1;
			}
			else if(sumc>summ)
			{
				countc+=1;
			}
			else
			{
				countm+=1;
			}
		}
		if(countc==countm)
		{
			cout<<"2 "<<countc<<endl;
		}
		else if(countc>countm)
		{
			cout<<"0 "<<countc<<endl;
		}
		else{
			cout<<"1 "<<countm<<endl;
		}
	}
	return 0;
}
