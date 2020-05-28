#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,j;
	float atat=0,awt=0;
  	cout<<"Enter the number of processes\n";
	cin>>n;
	int wt[n],b[n],tat[n],a[n],c[n];
	cout<<"Enter the burst time\n";
    	for(i=0;i<n;i++)
	{
		cout<<"p["<<i+1<<"]  ";
		cin>>b[i];
		a[i]=b[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				c[i]=j;
				break;
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
	tat[c[0]]=a[0];
	for(i=1;i<n;i++)
	{
		j=c[i];
		tat[j]=tat[c[i-1]]+a[i];
	}
	for(i=0;i<n;i++)
	{
		wt[c[i]]=tat[c[i]]-a[i];
  	}
	cout<<"Process\tArrival\tBurst\tCompletion\tTurnAround\twaiting\n\n";
	for(i=0;i<n;i++)
	{
		cout<<"p["<<i+1<<"]\t0\t"<<b[i]<<"\t"<<tat[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i]<<endl;
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