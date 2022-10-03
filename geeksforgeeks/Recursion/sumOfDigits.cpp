//TC=O(d)
//SC=O(d)

#include<bits/stdc++.h>
using namespace std;
int sum_of_digits(int num){
	if(num==0)
	{
		return 0;
	}
	else{
		return num%10+sum_of_digits(num/10);
	}
}
int main(){
	int num;
	cout<<"Enter the number\n";
	cin>>num;
	int z=sum_of_digits(num);
	cout<<"The sum of digits of "<<num<<" is "<<z<<endl;
	return 0;
	
}
