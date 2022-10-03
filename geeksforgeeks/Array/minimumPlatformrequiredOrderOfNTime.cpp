//Minimum number of platform required
//TC- O(n) SC- O(1)

#include<bits/stdc++.h>
using namespace std;
int findPlatform(int * arr, int * dep, int n)
{
	vector<int> a(2360,0);
	int plat =0;
	for(int i=0;i<n;i++)
	{
		++a[arr[i]];
		--a[dep[i]+1];
	}
	for(int i=1;i<=2360;i++)
	{
		a[i]=a[i]+a[i-1];
		if(a[i]>plat)
		{
			plat=a[i];
		}
	}
	return plat;
		
}
int main(){
	int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum Number of Platforms Required = "
         << findPlatform(arr, dep, n);
    return 0;
}
