//TC= O(3^n)
#include<bits/stdc++.h>
using namespace std;
int max_Pieces(int n, int a, int b, int c){
	if(n==0)
	{
		return 0;
	}
	if(n<0)
	{
		return -1;
	}
	int res=max(max_Pieces(n-a,a,b,c),max(max_Pieces(n-b,a,b,c),max_Pieces(n-c,a,b,c)));
	if(res==-1)
	{
		return -1;
	}
	else{
		return res+1;
	}
}
int main(){
	int n,a,b,c;
	cin>>n>>a>>b>>c;
	cout<<"The maximum pieces we can have is "<<max_Pieces(n,a,b,c)<<endl;
	return 0;
	
}
