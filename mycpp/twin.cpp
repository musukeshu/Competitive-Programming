#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[100],i,j,sum=0,count=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]<a[i])
			{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	int sum1=a[0];
	for(i=1;i<n;i++)
	{
      if(sum1<=sum/2)
      {
      	count++;
      	sum1=sum1+a[i];
      }
	}
	cout<<count+1;
	return 0;
}