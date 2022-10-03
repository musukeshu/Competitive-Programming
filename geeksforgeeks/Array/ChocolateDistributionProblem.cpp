//Chocolate Distribution Problem 
//Greedy Approach TC= O(n) and SC=O(n)
#include<bits/stdc++.h>
using namespace std;
int minChocolates(int arr[],int n){
	int b[n];
	for(int i=0;i<n;i++)
	{
		b[i]=1;
	}
	for(int i=1;i<n;i++)
	{
		if(arr[i]>arr[i-1])
		{
			b[i]=b[i-1]+1;
		}
	}
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i]>arr[i+1])
		{
			b[i]=max(b[i],b[i+1]+1);
		}
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=b[i];
	}
	return sum;
}
int main(){
	int a[] = { 5, 5, 4, 3, 2, 1 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Minimum number of chocolates = "
         << minChocolates(a, n) << "\n";
    return 0;
}
