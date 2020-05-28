#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,r,i,j,k,count,count1=0;
	cout<<"Enter the number of process\n";
	cin>>n;
	cout<<"Enter the nuumber of resources\n";
	cin>>r;
	int a[r],b[n],allo[n][r],need[n][r],max[n][r],flag[n];
	cout<<"Enter the number of available resources\n";
	for(i=0;i<r;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		flag[i]=1;
		cout<<"Enter the number of allocated resources for process "<<i<<"\n";
		{
			for(j=0;j<r;j++)
			{
				cin>>allo[i][j];
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<"Enter the number of maximun resources for process "<<i<<"\n";
		{
			for(j=0;j<r;j++)
			{
				cin>>max[i][j];
			}
		}
	}
	cout<<"The need matrix is \n";
	for(i=0;i<n;i++)
	{
			for(j=0;j<r;j++)
			{
				need[i][j]=max[i][j]-allo[i][j];
				cout<<need[i][j]<<" ";
			}
			cout<<"\n";
	}
	for(k=0;k<n;k++)
    {
		for(i=0;i<n;i++)
		{
			count=0;
			for(j=0;j<r;j++)
			{
           		if(need[i][j]<=a[j]&&flag[i]==1)
           			count++;
			}
			if(count==r)
			{
				count1++;
				flag[i]=0;
				for(j=0;j<r;j++)
				{
					a[j]=allo[i][j]+a[j];
				}
				b[k]=i;
				break;
			}
		}
	}
	if(count1==n)
	{
		cout<<"The process are in Safety state\n";
		cout<<"The safety sequence is \n";
		for(i=0;i<n;i++)
		{
			cout<<b[i]<<" ";
		}
    }
    else
    	cout<<"Not in safe state\n";
	return 0;
}