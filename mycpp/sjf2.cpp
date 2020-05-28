#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,j;
	float atat=0,awt=0;
  	cout<<"Enter the number of processes\n";
	cin>>n;
	int wt[n],b[n],tat[n],a[n],c[n],at[n],ct[n],temp[n],smallest,count=0,end;
	cout<<"Enter the burst time and arrival time\n";
    	for(i=0;i<n;i++)
	{
		cout<<"p["<<i+1<<"]  ";
		cin>>b[i]>>at[i];
		a[i]=b[i];
		temp[i]=b[i];
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
	for(i=0;count!=n;i++)
	{
		smallest=c[n-1];
		for(j=0;j<n;j++)
		{
			if(at[j]<=i&&b[j]<b[smallest]&&b[j]>0)
			{
				smallest=j;
			}
		}
		b[smallest]--;
		if(b[smallest]==0)
		{
			count++;
			end=i+1;
			wt[smallest]=end-at[smallest]-temp[smallest];
			tat[smallest]=end-at[smallest];
			ct[smallest]=end;
		}
	}
	atat=0;
	awt=0;
	cout<<"Process\tArrival\tBurst\tCompletion\tTurnAround\twaiting\n\n";
	for(i=0;i<n;i++)
	{
		cout<<"p["<<i+1<<"]\t"<<at[i]<<"\t"<<temp[i]<<"\t"<<ct[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i]<<endl;
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