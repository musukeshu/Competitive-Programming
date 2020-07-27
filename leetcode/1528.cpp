#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
    	string s1=s;
        for(int i=0;i<s.length();i++)
        {
            s1[indices[i]]=s[i];
        }
        return s1;
        
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
	string s;
	cin>>s;
	Solution obj1;
	cout<<obj1.restoreString(s,v);
	return 0;
}
