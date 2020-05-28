#include<bits/stdc++.h>
using namespace std;
int main()
{
	int sum1[4][4]={0};
	int i,j,t,m,n,n1,sum,count;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		if(sum1[m-1][n-1]==0)
		{
		count=1;
		sum=0;
		n1=n;
		while(count<=m)
		{
			sum=n*(n+1)/2;
			sum1[count-1][n1-1]=sum;
			n=sum;
			count++;
		}
		}
		cout<<sum1[m-1][n1-1]<<endl;
	}
	return 0;
}