//Find subarray with given sum in O(n) TC and constant SC
//Sliding window method

#include<bits/stdc++.h>
using namespace std;
void subArraySum(int* arr,int n,int sum){
	int minele=INT_MAX;
	for(int i=0;i<n;i++)
	{
		minele=min(minele, arr[i]);
	}
	minele=abs(minele);
	int cs=arr[0]+minele;
	int start=0;
	for(int i=1;i<n;i++){
		while(cs-(i-start)*minele>sum&&start<i)
		{
			cs=cs-minele-arr[start];
			start++;
		}
		if(cs-(i-start)*minele==sum)
		{
			cout<<"Index from "<<start <<" to "<<i-1;
			return;
		}
		if(i<n)
		{
			cs=cs+minele+arr[i];
		}	
	}
	cout<<"No such subarray exist"<<endl;
	
}
int main(){
	int arr[] = {1, 4, 20, 3, 10, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 33;
 
    subArraySum(arr, n, sum);
    return 0;
}
