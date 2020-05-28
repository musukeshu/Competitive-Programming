#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,k=0,total=0,t;
	float atat=0,awt=0;
  	cout<<"Enter the number of processes\n";
	cin>>n;
	int wt[n],b[n],tat[n],a[n],temp[n],ct[n],count;
	cout<<"Enter the burst time and arrival time\n";
    	for(i=0;i<n;i++)
	{
		cout<<"p["<<i+1<<"]  ";
		cin>>b[i]>>a[i];
		temp[i]=b[i];
	}
	count=n;
	cout<<"Enter the time quantum\n";
	cin>>t;
	for(i=0;count!=0;)
	{
		if(temp[i]<=t&&temp[i]>0)
		{
			total+=temp[i];
			temp[i]=0;
			k=1;
		}
		else if(temp[i]>0)
		{
			total+=t;
			temp[i]-=t;
		}
		if(temp[i]==0&&k==1)
		{
			count--;
			ct[i]=total;
			tat[i]=total-a[i];
			wt[i]=total-b[i]-a[i];
			k=0;
		}
		if(i==n-1)
		{
			i=0;
		}
		else if(a[i+1]<=total)
		{
			i++;
		}
		else 
		{
			i=0;
		}
	}
		cout<<"Process\tArrival\tBurst\tCompletion\tTurnAround\twaiting\n\n";
		for(i=0;i<n;i++)
		{
		cout<<"p["<<i+1<<"]"<<"\t"<<a[i]<<"\t"<<b[i]<<"\t"<<ct[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i]<<endl;
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
	
