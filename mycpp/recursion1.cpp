#include<bits/stdc++.h>
using namespace std;
int rec(int n)
{
	cout<<"inside rec("<<n<<")"<<endl;
	if(n==0)
	{
		return 0;
	}
	cout<<n<<endl;
	cout<<rec(n-1)<<endl;
	cout<<"exiting from rec("<<n<<")"<<endl;
	return 1;
}
int main()
{
	int n;
	cin>>n;
	rec(n);
}