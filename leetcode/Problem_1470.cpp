#include<bits/stdc++.h>
using namespace std;
class Solutions {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> v;
        for(int i=0;i<2*n-1;i+=2)
        {
            v.push_back(nums[int(i/2)]);
            v.push_back(nums[n+int(i/2)]);
            
        }
        
        return v;
        
    }
};

int main()
{
	vector <int> v;
	int n,c;
	cin>>n;
	for(int i=0;i<2*n;i++)
	{
		cin>>c;
		v.push_back(c);
	}
	Solutions obj1;
	vector <int> s=obj1.shuffle(v,n);
	
	for(int i=0;i<2*n;i++)
	{
		cout<<s[i]<<" ";
	}
	
	return 0;
}


