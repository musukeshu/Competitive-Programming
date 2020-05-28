#include<bits/stdc++.h>
using namespace std;
int main()
{
	int pf,n,l,q=2;
	cout<<"Enter number of page frames\n";
	cin>>pf;
	cout<<"Enter number of pages in sequence\n";
	cin>>n;
	int s[n],p[pf],arr[pf],hit,i,m,j,count=0,max;
	cout<<"Enter the sequence\n";
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<pf;i++)
	{
		p[i]=-1;
		arr[i]=999;
	}
	
	for(i=0;i<n;i++)
	{
		hit=0;
		q=0;
		cout<<"For page "<<s[i]<<": ";
		for(l=0;l<pf;l++)
		{
			if(s[i]==p[l])
			{
				hit=1;
				break;
			}
		}
		if(hit!=1)
		{
			for(j=0;j<pf;j++)
			{
				if(p[j]==-1)
				{
					p[j]=s[i];
					q=1;
					count++;
					for(m=0;m<pf;m++)
			        {
				        if(p[m]!=-1)
				        cout<<p[m]<<" ";
			        }
					break;
				}
				arr[j]=999;
			}
			if(q==0)
				{
					for(j=0;j<pf;j++)
					{
						for(m=i;m<n;m++)
					    {
					       if(s[m]==p[j])
						   {
							 arr[j]=m;
							 break;
						   }
					    }
			    	}
				max=0;
				for(m=0;m<pf;m++)
				{
					if(arr[m]>arr[max])
					max=m;
				}
				p[max]=s[i];
				count++;
				for(m=0;m<pf;m++)
				{
					cout<<p[m]<<" ";
				}
			}
			
		}
		if(hit==1)
		{
			cout<<"No page fault occured and page sequence is ";
			for(m=0;m<pf;m++)
			{
				if(p[m]!=-1)
				cout<<p[m]<<" ";
			}
		}
		cout<<"\n";
	}
	cout<<"Number of page fault occured is : "<<count;
	return 0;
}