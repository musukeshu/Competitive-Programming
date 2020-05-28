#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    int i;
    cin>>s;
    for(i=0;i<=s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]=toupper(s[i]); //s[i]=s[i]-32;
        }
       
       else if(s[i]>='A'&&s[i]<='Z')
        {
           s[i]=tolower(s[i]);  //s[i]=s[i]+32;
        }
    }
    cout<<s;
    return 0;
}