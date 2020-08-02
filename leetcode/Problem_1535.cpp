#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int max=*max_element(arr.begin(),arr.end());
        int i,count=0;
        if(k>=arr.size()-1)
        {
            return max;
        }
        else{
            for(i=1;i<arr.size();i++)
            {
               
                if(arr[0]<arr[i])
                {
                    swap(arr[0],arr[i]);
                    count=1;
                    
                }
                else{
                   count++;
                      
                }
                if(count==k)
                    {
                        return arr[0];
                    }
            }
        }
        return max;
    }
};

int main()
{
	vector<int> v;
	int k,n,c;
	cin>>k;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		v.push_back(c);
	}
	Solution obj;
	cout<<obj.getWinner(v,k);
	
}
