//Minimum number of platform required
//TC- O(nlogn) SC- O(n)
//Hash map method or multiset method

#include<bits/stdc++.h>
using namespace std;
int findPlatform(int * arr, int * dep, int n)
{
	multiset<pair<int, char> > m;
	for(int i=0;i<n;i++)
	{
		m.insert(make_pair(arr[i],'a'));
		m.insert(make_pair(dep[i],'d'));
	}
	int result=0,plat=0;
	multiset<pair<int,char> >::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		if(it->second=='a')
		{
			plat++;
		}
		else{
			plat--;
		}
		if(result<plat)
		{
			result=plat;
		}
	}
	return result;	
}
int main(){
	int arr[] = { 900, 940, 950, 1100, 1500, 1800 };
    int dep[] = { 910, 1200, 1120, 1130, 1900, 2000 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum Number of Platforms Required = "
         << findPlatform(arr, dep, n);
    return 0;
}
