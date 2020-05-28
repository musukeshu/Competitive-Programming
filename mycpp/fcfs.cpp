#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	float atat=0,awt=0;
  	cout<<"Enter the number of processes\n";
	cin>>n;
	int wt[n],b[n],tat[n];
	cout<<"Enter the burst time\n";
    	for(i=0;i<n;i++)
	{
		cout<<"p["<<i+1<<"]  ";
		cin>>b[i];
	}
//Only when arrival time is 0
	tat[0]=b[0];
	for(i=1;i<n;i++)
	{
		tat[i]=tat[i-1]+b[i];
	}
	for(i=0;i<n;i++)
	{
		wt[i]=tat[i]-b[i];
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