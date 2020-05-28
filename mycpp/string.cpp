
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    int t,i,j,m,n;
    cin>>t;
    
    while(t--)
    {
    cin>>s>>m>>n;
    int y=strlen(s);
 sort(s+m,s+n+1,greater<int>());
    s[y]='\0';
    cout<<s<<"\n";
    }
    return 0;
}