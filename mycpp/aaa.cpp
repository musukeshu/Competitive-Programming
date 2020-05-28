/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int year,odd;
	cin>>year;
	odd=0;
	int l1=0;
 	int l2=3;
	if(year%400==0 || (year%4==0 && year%100!=0))
	{
	    l1=1;
	}
	while(l1!=l2)
	{
	odd=0;
	while(odd==0||odd%7!=0)
	{
		if(year%400==0)
		{
			odd+=2;
			year++;
		}
		else if(year%100==0)
		{
			odd++;
			year++;
		}
		else if(year%4==0)
		{
			odd+=2;
			year++;
		}
		else
		{
			odd++;
			year++;
		}
	}
	if(year%400==0 || (year%4==0 && year%100!=0))
	{
	    l2=1;
	}
	else
	{
		l2=0;
	}
	}
	cout<<year;
	return 0;
}