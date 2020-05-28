#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,j,k,l;
	float atat=0,awt=0;
  	cout<<"Enter the number of processes\n";
	cin>>n;
	int wt[n],b[n],tat[n],a[n],c[n],p[n],temp[n];
	cout<<"Enter the burst time and priority number\n";
    	for(i=0;i<n;i++)
	{
		cout<<"p["<<i+1<<"]  ";
		cin>>b[i]>>p[i];
		a[i]=p[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>=a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				k=j;
			}
		}
		cout<<k+1;
	}
	c[0]=-1;
	for(i=0;i<n;i++)
	{
		l=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==p[j])
			{
				
				for(k=0;k<i;k++)
				{
					if(c[k]==j)
					{
						l=1;
					}
					else
						l=0;

				}
				if(l==0)
				{
					c[i]=j;
					break;
				}
				else
				{
					if(b[j]>b[j+1])
					{
						c[i]=j;
						c[i-1]=j+1;
					}
					else
					{
						c[i]=j+1;
						c[i-1]=j;
					}
					break;
				}

			}
		}
	}
	cout<<"The order of scheduling will be :\n";
	for(i=0;i<n;i++)
	{
		
		cout<<"p["<<c[i]+1<<"]    ";
	}
	cout<<"\n";
//When arrival time is 0 i.e., non-preemptive scheduling
	tat[c[0]]=b[c[0]];
	for(i=1;i<n;i++)
	{
		j=c[i];
		tat[j]=tat[c[i-1]]+b[j];
	}
	for(i=0;i<n;i++)
	{
		wt[c[i]]=tat[c[i]]-b[c[i]];
  	}
	cout<<"Process\tArrival\tBurst\tPriority\tCompletion\tTurnAround\twaiting\n\n";
	for(i=0;i<n;i++)
	{
		cout<<"p["<<i+1<<"]\t0\t"<<b[i]<<"\t"<<p[i]<<"\t"<<tat[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i]<<endl;
   		awt+=wt[i];
		atat+=tat[i];
	}
	cout<<"The total waiting time is: "<<awt<<endl;
	cout<<"The total turnaround time is: "<<atat<<endl;
	atat/=n;
	awt/=n;
	cout<<"The average waiting time is: "<<awt<<endl;
	cout<<"The average turnaround time is: "<<atat<<endl;
	return 0;
}