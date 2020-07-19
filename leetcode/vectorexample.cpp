#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> v;
	for(int i=1;i<=10;i++)
	{
		v.push_back(i);
	}
	v.push_back(12);
	v.push_back(12);
	v.push_back(11);
	v.push_back(12);
	sort(v.begin(),v.end());
	for(vector<int>::iterator it=v.begin();it!=v.end();it++)
	{
		cout<<*it<<" ";
	}
	 	cout<<endl;
        int count=0;
        int nopairs=0;
        for(vector<int>::iterator it=v.begin();it!=v.end()-1;it++)
        {
            if(*it==*(it+1))
            {
                count++;
                cout<<(*it)<<" is "<<count<<endl;
            }
            else
            {
                if(count!=0)
                nopairs+=(count*(count+1))/2;
                cout<<nopairs<<endl;
                count=0;
            }
        }
        if(count!=0)
                nopairs+=(count*(count+1))/2;
      cout<<nopairs;  
	return 0;
}
