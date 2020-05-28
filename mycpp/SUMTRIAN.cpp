#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int i,j,k,s[100][100];
	for(i=0;i<n;i++)
	{
      cin>>a[i];
	for(j=0;j<a[i];j++)
	{
		for(k=0;k<=j;k++)
		{
			cin>>s[j][k];
		}

	}
	int sum=0,k=0;
	for(j=0;j<a[i]-1;j++)
	{
		while(k<a[i]-1)
		{
			sum=sum+s[j][k];
			if(sum+s[j+1][k]<sum+s[j+1][k+1])
			{
				sum=sum+s[j+1][k+1];
				k=k+1;
				break;
			}
			else 
              {
 				sum=sum+s[j+1][k];
 				k=k;
 				break;
 			  }
		}
	}
	cout<<sum<<"\n";
}
return 0;
}