#include<bits/stdc++.h>
using namespace std;
int Josep(int n, int k){
	if(n==1)
	{
		return 0;
	}
	else
	{
		return (Josep(n-1,k)+k)%n;
	}
}
int main(){
	int n,k;
	cin>>n>>k;
	cout<<Josep(n,k);
}
