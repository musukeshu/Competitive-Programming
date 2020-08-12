#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>previous,current;
        previous.push_back(1);
        if(rowIndex==0)
        {
            return previous;
        }
        
        int count=1;
        while(count<=rowIndex)
        {
            current.push_back(1);
            for(int i=0;i<previous.size()-1;i++)
            {
                current.push_back(previous[i]+previous[i+1]);
            }
            current.push_back(1);
            if(count==rowIndex)
            {
                return current;
            }
            previous=current;
            current.clear();
            count++;
        }
        
        return previous;    
        
    }
};

int main()
{
	vector<int> v;
	Solution obj;
	int c,i;
	cin>>c;
	v=obj.getRow(c);
	for(i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	return 0;
}
