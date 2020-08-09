#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string makeGood(string s) {
        stack<char> s1;
        for(int i=0;i<s.length();i++)
        {
            s1.push(s[i]);
            while(!s1.empty()&&(s1.top()==s[i+1]+32 ||s1.top()==s[i+1]-32))
            {
                s1.pop();
                i++;
            }
        }
        string s2="";
        while(!s1.empty())
        {
            s2=s1.top()+s2;
            s1.pop();
        }
       
        return s2;
    }
};
int main()
{
	string s1;
	cin>>s1;
	Solution obj;
	cout<<obj.makeGood(s1);
}
