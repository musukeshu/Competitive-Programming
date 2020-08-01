#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
       sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        if(target==arr)
        {
            return true;
        }
       return false; 
    }
};
int main()
{
	int n,c,i;
	vector <int> arr,target;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>c;
		target.push_back(c);
	}
	for(i=0;i<n;i++)
	{
		cin>>c;
		arr.push_back(c);
	}
	Solution obj;
	cout<<obj.canBeEqual(target,arr);
}
