#include<bits/stdc++.h>
using namespace std;
 int main()
{
int p[20],bt[20], su[20], wt[20],temp[20],tat[20],i,t1,t2, total, n, count;
float awt=0, atat=0;
cout<<"Enter the number of processes\n";
cin>>n;
cout<<"Enter the time quantum for queue 1\n";
cin>>t1;
cout<<"Enter the time quantum for queue 2\n";
cin>>t2;
cout<<"Enter the burst time for each process\n";
for(i=0;i<n;i++)
{
	p[i]=i+1;
	cin>>bt[i];
	temp[i]=bt[i];
}
count=n;
total=0;
while(count!=0)
{
	for(i=0;i<n;i++)
	{
		if(temp[i]<=t1&& temp[i]>0)
		{
			total+=temp[i];
			temp[i]=0;
		}
		else
		{
			temp[i]-=t1;
			total+=t1;
		}
		if(temp[i]==0)
		{
			wt[i]=total-bt[i];
			tat[i]=total;
			count--;
		}
	}
	for(i=0;i<n;i++)
	{
		if(temp[i]==0)
		{
			continue;
		}
		else if(temp[i]<=t2&& temp[i]>0)
		{
			total+=temp[i];
			temp[i]=0;
		}
		else
		{
			temp[i]-=t2;
			total+=t2;
		}
		if(temp[i]==0)
		{
			wt[i]=total-bt[i];
			tat[i]=total;
			count--;
		}
		
	}
	for(i=0;i<n;i++)
	{
		if(temp[i]==0)

		{
			continue;
		}
		else
		{
			total+=temp[i];
			temp[i]=0;
			wt[i]=total-bt[i];
			tat[i]=total;
			count--;
		}

	}
}
cout<<"Process\tArrival\tBurst\tCompletion\tTurnAround\twaiting\n\n";
	for(i=0;i<n;i++)
	{
		cout<<"p["<<i+1<<"]\t0\t"<<bt[i]<<"\t"<<tat[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i]<<endl;
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