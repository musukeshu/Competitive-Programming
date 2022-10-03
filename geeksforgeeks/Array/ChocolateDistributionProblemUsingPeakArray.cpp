//Chocolate Distribution Problem 
//Peak Approach TC= O(n) and SC=O(1)
#include<bits/stdc++.h>
using namespace std;
int findval(int peak, int i, int j){
	int count=j-i+1;
	peak=max(peak,count);
	int s=peak+(((count - 1) * count)/2);
	return s;
}
int minChocolates(int arr[],int n){
	int i=0,j=0,val=1,res=0;
	while(j<n-1){
		if(arr[j]>arr[j+1])
		{
			j+=1;
			continue;
		}
		if(i==j)
		{
			res+=val;
		}
		else{
			res+=findval(val,i,j);
			val=1;
		}
		if(arr[j]<arr[j+1])
		{
			val+=1;
		}
		else{
			val=1;
		}
		j+=1;
		i=j;
	}
	if(i==j)
	{
		res+=val;
	}
	else{
		res+=findval(val,i,j);
	}
	return res;
}
int main(){
	int a[] = { 5, 5, 4, 3, 2, 1 };
    int n = sizeof(a) / sizeof(a[0]);
    cout << "Minimum number of chocolates = "
         << minChocolates(a, n) << "\n";
    return 0;
}
