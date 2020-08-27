#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findRightInterval(vector<vector<int> >& intervals) {
        
       vector<int> ans;
        map<int, int> mp;
        for(int i=0;i<intervals.size();i++)
        {
            mp[intervals[i][0]]=i;
        }
        for(auto i:intervals)
        {
            auto it=mp.lower_bound(i[1]);
            if(it==mp.end())
            {
                ans.push_back(-1);
            }
            else
            {
                ans.push_back(it->second);
            }
        }
        
       return ans;    
        
    }
};

int main()
{
	Solution obj;
	int A[3][2]={{1,2},{3,4},{5,6}};
	vector<int>v=obj.findRightInterval(A);
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}
}
