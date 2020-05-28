#include<bits/stdc++.h>
using namespace std;
 int main()
{
int p[20],bt[20], su[20], wt[20],tat[20],i, k, n, temp;
float wtavg, tatavg;
printf("Enter the number of processes \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
p[i] = i+1;
printf("Enter the Burst Time of Process %d \n", i+1);
scanf("%d",&bt[i]);
printf("System/Batch/User Process (1/2/3) ? \n");
scanf("%d", &su[i]);
}
for(i=0;i<n;i++)
for(k=i+1;k<n;k++)
if(su[i] > su[k])
{
temp=p[i];
p[i]=p[k];
p[k]=temp;
temp=bt[i];
bt[i]=bt[k];
bt[k]=temp;
temp=su[i];
su[i]=su[k];
su[k]=temp;
}
wtavg = wt[0] = 0;
tatavg = tat[0] = bt[0];
for(i=1;i<n;i++)
{
wt[i] = wt[i-1] + bt[i-1];
tat[i] = tat[i-1] + bt[i];
wtavg = wtavg + wt[i];
tatavg = tatavg + tat[i];
}
printf("\nPROCESS\t\t SYSTEM/BATCH/USER \tPROCESS \tBURST TIME\tWAITING TIME\tTURNAROUND TIME\n");
for(i=0;i<n;i++)
cout<<"p["<<p[i]<<"]\t\t"<<su[i]<<"\t\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<"\n";
cout<<"Total turnaround time is "<<tatavg<<"\n";
cout<<"Total waiting time is "<<wtavg<<"\n";
printf("\nAverage Waiting Time is %f",wtavg/n);
printf("\nAverage Turnaround Time is %f",tatavg/n);
}