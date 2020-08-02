#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int i,j,k,count=0;
        
        for(i=0;i<arr.size()-2;i++)
        {
            for(j=i+1;j<arr.size()-1;j++)
            {
                for(k=j+1;k<arr.size();k++)
                {
                    if(abs(arr[i]-arr[j])<=a && abs(arr[j]-arr[k])<=b && abs(arr[k]-arr[i])<=c)
                        count++;
                }
            }
        }
        return count;
        
    }
};

int main()
{
	vector<int> v;
	int k,n,c,a,b;
	cin>>a>>b>>c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>k;
		v.push_back(k);
	}
	Solution obj;
	cout<<obj.countGoodTriplets(v,a,b,c);
	
}
