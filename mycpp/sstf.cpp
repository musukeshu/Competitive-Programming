#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p,max,n,i,j,min,min1,sum=0;
	cout<<"Enter he current position of head\n";
	cin>>p;
	cout<<"Enter the maximum number of cylinder\n";
	cin>>max;
	cout<<"Enter the number of elements in the queue\n";
	cin>>n;
	int a[n],b[n];
	cout<<"Enter the elements in the queue\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=0;
	}
	cout<<"The order of sequence is: \n";
	for(i=0;i<n;i++)
	{
		min=0,min1=max;
		for(j=0;j<n;j++)
		{
			if(b[j]!=1)
			{
				if(abs(p-a[j])<min1)
				{
					min=j;
					min1=abs(p-a[j]);
				}
			}
		}
		b[min]=1;
		p=a[min];
		sum=sum+min1;
		cout<<a[min]<<" ";
	}
	cout<<"The distance of head movement is: "<<sum;
	return 0;
}
