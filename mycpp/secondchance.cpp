

#include<iostream>
using namespace std;
int main()
{
	int i,j,count=0,hit=0,victimptr=0,s[100],p[100],usedbit[100],n,pf;
	cout<<"Enter the number of page frames\n";
	cin>>pf;
	for(i=0;i<pf;i++)
	{
		p[i]=-1;
		usedbit[i]=0;
	}
	cout<<"Enter the number of page reference in the sequence\n";
	cin>>n;
	cout<<"Enter the sequence\n";
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<n;i++)
	{
		hit=0;
		for(j=0;j<pf;j++)
		{
			if(s[i]==p[j])
			{
				hit=1;
				break;
			}
		}
		cout<<"For Page "<<s[i]<<": ";
		if(hit==1)
		{
			cout<<"NO Page fault occured and sequence is : ";
			for(j=0;j<pf;j++)
			{
				cout<<p[j]<<" ";
			}
			cout<<"\n";
		}
		 else
        {
            count++;
            if(usedbit[victimptr]==1)
            {
                do
                {
                    usedbit[victimptr]=0;
                    victimptr++;
                    if(victimptr==pf)
                        victimptr=0;
                }
                while(usedbit[victimptr]!=0);
            }
            if(usedbit[victimptr]==0)
            {
                p[victimptr]=s[i];
                usedbit[victimptr]=1;
                victimptr++;
            }
            for(j=0;j<pf;j++)
			{
				if(p[j]!=-1)
				cout<<p[j]<<" ";
			}
		    cout<<"\n";
 
        }
        if(victimptr==pf)
            victimptr=0;
    }		
	cout<<"Total number of page faults are : "<<count<<"\n";
	return 0;
}
