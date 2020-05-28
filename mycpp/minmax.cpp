#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,i,min=101,max=1,count,count1;
	cin>>n;
	long a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>=max)
		{
			max=a[i];
		}
		if(a[i]<=min)
		{
			min=a[i];
		}
	}
	count=min,count1=min;
 	while(count<=max)
 	{
 		count++;
 		for(i=0;i<n;i++)
 		{
 			if(count==a[i])
 			{
 				count1++;
 				break;
 			}
 		}
 		
 	}
 	if(count1==max)
 	{
 		cout<<"YES";
 	}
 	else
 	{
 		cout<<"NO";
 	}
 	return 0;
}