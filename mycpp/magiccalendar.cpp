#include<bits/stdc++.h>
using namespace std;
int main()
{
	int year,odd;
	cin>>year;
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
	cout<<year-1;
	return 0;
}