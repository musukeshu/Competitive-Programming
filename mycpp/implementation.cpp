#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,b[10];
    for(i=0;i<=9;i++)
    {
        b[i]=0;
    }
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        b[s[i]-48]++;
    }
    for(i=0;i<=9;i++)
    {
        cout<<i<<" "<<b[i]<<endl;
    }
    return 0;
}