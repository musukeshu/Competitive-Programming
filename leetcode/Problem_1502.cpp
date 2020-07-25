#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        int i, diff=arr[1]-arr[0];
        for(i=1;i<arr.size()-1;i++)
        {
            if(arr[i+1]-arr[i]==diff)
                continue;
            else{
                break;
            }
        }
        if(i==arr.size()-1)
        {
            return true;
        }
        else{
            return false;
        }
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
	bool s=obj1.canMakeArithmeticProgression(v);
	cout<<s<<endl;
	return 0;
}
