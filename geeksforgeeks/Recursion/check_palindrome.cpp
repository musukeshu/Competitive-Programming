#include<bits/stdc++.h>
using namespace std;
bool check_palindrome(string s, int i, int j)
{
	if(i>=j)
	{
		return true;
	}
	if(s[i]==s[j])
	{
		check_palindrome(s,i+1,j-1);
	}
	else{
		return false;
	}
	
}
int main(){
	string s;
	cout<<"Enter the string\n";
	cin>>s;
	bool result= check_palindrome(s,0, s.length()-1);
	if(result)
	{
		cout<<"Its Palindrome\n";
	}
	else{
		cout<<"Its not Palindrome\n";
	}
	return 0;	
}
