#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,max,a1,b1,a2,b2,i;
	int c[4];
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		a1=a/10;
		a2=a%10;
		b1=b/10;
		b2=b%10;
		c[0]=a+b;
		c[1]=(a1*10+b1)+(a2*10+b2);
		c[2]=(a1*10+b2)+(b1*10+a2);
		c[3]=(b2*10+a2)+(b1*10+a1);
		max=c[0];
		for(i=1;i<4;i++)
		{
			if(c[i]>max)
			{
				max=c[i];
			}
		}
		cout<<max<<endl;

	}
	return 0;
}