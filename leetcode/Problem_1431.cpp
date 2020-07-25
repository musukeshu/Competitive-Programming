#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> v;
        int i,max=*max_element(candies.begin(),candies.end());
        for(i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=max)
            {
                v.push_back(true);
            }
            else
            {
                v.push_back(false);
            }
            
        }
        return v;
    }
};

int main()
{
	vector <int> v;
	int c,n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		v.push_back(c);
	}
	Solution obj1;
	vector<bool> s=obj1.kidsWithCandies(v,m);
	for(int i=0;i<n;i++)
	{
		cout<<s[i];
	}
	return 0;
}


