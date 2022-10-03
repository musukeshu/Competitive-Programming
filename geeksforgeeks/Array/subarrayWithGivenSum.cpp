//Find subarray with given sum in O(n) TC and O(n) SC
//Hash map method

#include<bits/stdc++.h>
using namespace std;
void subArraySum(int* arr,int n,int sum){
	int cs=0;
	map <int, int>m;
	for(int i=0;i<n;i++){
		cs+=arr[i];
		m[cs]=i;
		
		if(cs==sum){
			cout<<"The index is from 0 to "<<i<<endl;
			return;
		}
		if(m.find(cs-sum)!=m.end())
		{
			cout<<"The index is from "<<m[cs-sum]+1<<" to "<<i<<endl;
			return;
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
