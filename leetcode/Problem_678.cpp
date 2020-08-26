#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkValidString(string s) {
        stack <int>brack,star;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                brack.push(i);
            else if(s[i]=='*')
                star.push(i);
            else
            {
                if(!brack.empty())
                {
                    brack.pop();
                }
                else if(!star.empty())
                {
                    star.pop();
                }
                else{
                    return false;
                }
            }
        }
        while(!brack.empty())
        {
            if(star.empty())
            {
                return false;
            }
            else if(brack.top()<star.top())
            {
                star.pop();
                brack.pop();
            }
            else
                return false;
        }
        return true;
        
    }
};
int main()
{
	string s;
	cin>>s;
	Solution obj;
	cout<<obj.checkValidString(s);
	return 0;
}
