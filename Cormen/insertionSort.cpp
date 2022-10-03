//Chapter 2: Getting Started (CLRS)
#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>A{1,4,8,6,3,3,10,13};
	int key;
	for(int i=1;i<A.size();i++)
	{
		key=A[i];
		int j=i-1;
		while(j>=0&&key<=A[j])
		{
			A[j+1]=A[j];
			j-=1;
		}
		A[j+1]=key;
	}
	for(int i=0;i<A.size();i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}
