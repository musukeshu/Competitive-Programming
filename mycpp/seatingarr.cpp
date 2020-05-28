#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t;
	int seat;
	cin>>t;
	while(t--)
	{
		cin>>seat;
		if(seat%6==0)
		{
			if(seat%12!=0)
			{
     			cout<<seat+1<<" "<<"WS"<<endl;
			}
			else
			{
				cout<<seat-11<<" WS"<<endl;
			}
		}
		else if(seat%6==1)
		{
			if(seat%12==1)
			{
				cout<<seat+11<<" WS"<<endl;
			}
			else
			{
				cout<<seat-1<<" WS"<<endl;
			}
		}
		else if(seat%6==2)
		{
			if(seat%12==2)
			{
				cout<<seat+9<<" MS"<<endl;
			}
			else
			{
				cout<<seat-3<<" MS"<<endl;
			}
		}
		else if(seat%6==3)
		{
			if(seat%12==3)
			{
				cout<<seat+7<<" AS"<<endl;
			}
			else
			{
				cout<<seat-5<<" AS"<<endl;
			}
		}
		else if(seat%6==4)
		{
			if(seat%12==10)
			{
				cout<<seat-7<<" AS"<<endl;
			}
			else
			{
				cout<<seat+5<<" AS"<<endl;
			}
		}
		else if(seat%6==5)
		{
			if(seat%12==11)
			{
				cout<<seat-9<<" MS"<<endl;
			}
			else
			{
				cout<<seat+3<<" MS"<<endl;
			}
		}
	}
	return 0;
}