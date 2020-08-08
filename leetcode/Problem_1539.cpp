#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int a=1,n=0;
        while(k!=0)
        {
            
            if(arr.size()!=n && arr[n]==a )
            {
                a=a+1;
                n=n+1;
            }
            else{
                a=a+1;
                k=k-1;
            }  
            
        }
        return a-1;
    }
};
int main()
{
	vector<int> v;
	int c,n,k;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		v.push_back(c);
	}
	cin>>k;
	Solution obj;
	cout<<obj.findKthPositive(v,k);
	
	
}
