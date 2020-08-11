#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int i, s=citations.size();
        if(s==0)
            return 0;
        sort(citations.begin(),citations.end());
        for( i=0;i<s;i++)
        {
            if(s-i<=citations[i])
               break;
        }
         return s-i;
    }
};

int main()
{
	Solution obj;
	vector <int> c;
	int i,k,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>k;
		c.push_back(k);
	}
	cout<<obj.hIndex(c);
	return 0;
}
