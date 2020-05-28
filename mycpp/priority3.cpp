#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,j,l,k;
	float atat=0,awt=0;
  	cout<<"Enter the number of processes\n";
	cin>>n;
	int wt[n],b[n],tat[n],at[n],ct[n],p[n],temp[n],smallest,count=0,end;
	cout<<"Enter the burst time,arrival time and priority number\n";
    	for(i=0;i<n;i++)
	{
		cout<<"p["<<i+1<<"]  ";
		cin>>b[i]>>at[i]>>p[i];
		temp[i]=b[i];
	}
	int max=0;
	for(i=0;i<n;i++)
	{
		if(p[i]>=max)
		{
			max=p[i];
			l=i;
		}
	}

	for(i=0;count!=n;i++)
	{
		smallest=l;
		for(j=0;j<n;j++)
		{
			if(at[j]<=i&&p[j]<p[smallest]&&b[j]>0)
			{
				smallest=j;
			}
		}
		for(k=0;k<n;k++)
		{
			if(p[smallest]==p[k]&&b[k]>0)
			{
				if(at[smallest]>at[k])
				{
					smallest=k;
				}
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
	cout<<"Process\tArrival\tBurst\tPriority\tCompletion\tTurnAround\twaiting\n\n";
	for(i=0;i<n;i++)
	{
		cout<<"p["<<i+1<<"]\t"<<at[i]<<"\t"<<temp[i]<<"\t"<<p[i]<<"\t"<<ct[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i]<<endl;
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