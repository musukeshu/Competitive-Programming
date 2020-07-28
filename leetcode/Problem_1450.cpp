#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count=0;
        for(int i=0;i<startTime.size();i++)
        {
            if(startTime[i]<=queryTime)
            {
                if(endTime[i]>=queryTime)
                {
                    count++;
                }
            }
        }
    return count;
    }
};

int main()
{
	vector<int> st,et;
	int n,c,qt;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		st.push_back(c);
	}
	for(int i=0;i<n;i++)
	{
		cin>>c;
		et.push_back(c);
	}
	cin>>qt;
	Solution obj1;
	cout<<obj1.busyStudent(st,et,qt);
	return 0;
}
