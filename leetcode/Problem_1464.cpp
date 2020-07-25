#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        return ((nums[nums.size()-2]-1)*(nums[nums.size()-1]-1));
    }
};

int main()
{
	vector <int> v;
	int c,n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		v.push_back(c);
	}
	Solution obj1;
	int s=obj1.maxProduct(v);
	cout<<s<<endl;
	return 0;
}


