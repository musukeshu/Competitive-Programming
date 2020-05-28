#include<bits/stdc++.h>
using namespace std;
int main()
{
	int b[1000],n,i,q,c;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[a[i]]++;
	}
	cin>>q;
	while(q--)
	{
		cin>>c;
		if(b[c]>0)
		{
			cout<<b[c]<<"\n";
		}
		else
			cout<<"NOT PRESENT\n";
	}
	return 0;
}