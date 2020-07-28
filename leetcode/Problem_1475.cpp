#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        stack<int> s;
        vector<int> selling(prices.size(),0);
        for(int i=prices.size()-1;i>=0;i--)
        {
            while(!s.empty()&&s.top()>prices[i])
              s.pop();
            if(!s.empty())
                selling[i]=prices[i]-s.top();
            else
            {
                selling[i]=prices[i];
            }
            s.push(prices[i]);
        }
        return selling;
    }
};

int main()
{
	vector<int> sp,s;
	int n,c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		s.push_back(c);
	}
	Solution obj;
	sp=obj.finalPrices(s);
	
	for(int i=0;i<n;i++)
	{
		cout<<sp[i];
	}
}
