#include<bits/stdc++.h>
#include<String>
using namespace std;
string s1;
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
    	s1="";
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
	string s2;
	Solution obj1;
	s2=obj1.restoreString(s,v);
	cout<<s<<endl;
	return 0;
}
