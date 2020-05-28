#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,j,k,l;
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
	k=n-1;
	for(i=0;count!=n;)
	{
		smallest=c[k];
		for(j=0;j<n;j++)
		{
			if(at[j]<=i&&b[j]!=0&&b[j]<=temp[smallest])
			{
				smallest=j;
			}
		}
		i=i+b[smallest];
		end=i;
		wt[smallest]=end-at[smallest]-b[smallest];
		tat[smallest]=end-at[smallest];
		ct[smallest]=end;
		/*for(l=0;l<n;l++)
		{
			if(a[l]==b[smallest])
			{
				a[l]==0;
				break;
			}
		}*/
		b[smallest]=0;
		count++;
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
