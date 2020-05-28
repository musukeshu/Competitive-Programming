#include<iostream>
using namespace std;
int main()
{ 
    int i,y,n;
    cin>>n;
    int a[n];
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	int z=0;
	while(a[i]!=0)
	{
	y=a[i]%10;
	a[i]=a[i]/10;
	z=z*10+y;
	}
	cout<<z<<"\n";
	}
	return 0;
}