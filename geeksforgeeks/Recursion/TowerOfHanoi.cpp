#include<bits/stdc++.h>
using namespace std;
void TOI(int n,char A, char B, char C)
{
	if(n==1){
		cout<<"Move disk 1 from "<<A<<" to "<<C<<endl;
		return;
	}
	TOI(n-1,A,C,B);
	cout<<"Move disk "<<n<<" from "<<A<<" to "<<C<<endl;
	TOI(n-1,B,A,C);
}
int main(){
	int n;
	cin>>n;
	TOI(n,'A','B','C');
}
