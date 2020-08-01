#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        int i,lower=0,upper=0;
        for(i=0;i<word.length();i++)
        {
            if(islower(word[i]))
            {
                lower++;
            }
            else{
                upper++;
            }
        }
        if(lower==word.length()||upper==word.length())
           {
            
                return true;
           }
        else if(lower==word.length()-1&&isupper(word[0]))
        {
            return true;
        }
        return false;
        
    }
};
int main()
{
	string s;
	cin>>s;
	Solution obj;
	cout<<obj.detectCapitalUse(s);
}
