#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkValidString(string s) {
        int min=0;
        int max=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
            {
                min++;
                max++;
            }
            else if(s[i]=='*')
            {
                max++;
                if(min>0)
                {
                    min--;
                }
            }
            else
            {
                max--;
                if(min>0)
                {
                    min--;
                }
            }
            if(max<0)
            {
                return false;
            }
        }
        if(min!=0)
        {
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
