#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> v;
        if(nums.empty())
        {
            return v;
        }
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                v.push_back(nums[i]);
            }
            
        }
       
        
        return v;
    }
};
int main()
{
	vector<int> v;
	int c,n;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		v.push_back(c);
	}
	Solution obj;
	vector<int> k=obj.findDuplicates(v);
	for(int i=0;i<k.size();i++)
	{
		cout<<k[i];
	}
	
}
