#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,temp;
	cout<<"Enter the number of elements\n";
	cin>>n;
	int a[n];
	cout<<"Enter the elements\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		temp=a[i];
		 j=i;
		 while(j>0&&temp<a[j-1])
		 {
		 	a[j]=a[j-1];
		 	j=j-1;
		 }
		 a[j]=temp;
	}
	cout<<"The sorted elements are\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}