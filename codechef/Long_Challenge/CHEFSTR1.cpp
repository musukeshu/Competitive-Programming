#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,n,i,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long int a[n];
        cin>>a[0];
        sum=0;
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==a[i-1])
            {
            	sum=sum+0;
			}
			else
			{
				sum=sum+abs(a[i]-a[i-1])-1;
			}
            
        }

        cout<<sum<<endl;
    }
}
