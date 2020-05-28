#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	float atat=0,awt=0;
  	cout<<"Enter the number of processes\n";
	cin>>n;
	int wt[n],b[n],tat[n],c[n],a[n];
	cout<<"Enter the burst time and arrival time\n";
    	for(i=0;i<n;i++)
	{
		cout<<"p["<<i+1<<"]  ";
		cin>>b[i]>>a[i];
	}
//when there is some arrival time 
	tat[0]=b[0];
	c[0]=b[0];
	for(i=1;i<n;i++)
	{
		c[i]=c[i-1]+b[i];
	}
	for(i=1;i<n;i++)
	{
		tat[i]=c[i]-a[i];
	}
	for(i=0;i<n;i++)
	{
		wt[i]=tat[i]-b[i];
  	}
	cout<<"Process\tArrival\tBurst\tCompletion\tTurnAround\twaiting\n\n";
	for(i=0;i<n;i++)
	{
		cout<<"p["<<i+1<<"]\t\t"<<a[i]<<"\t\t"<<b[i]<<"\t"<<c[i]<<"\t\t"<<tat[i]<<"\t\t"<<wt[i]<<endl;
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