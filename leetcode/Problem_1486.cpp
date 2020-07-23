#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int xorOperation(int n, int start) {
        
        int i,a[n];
        a[0]=start;
        
        for(i=1;i<n;i++)
        {
            a[i]=(start+2*i)^ (a[i-1]);
        }
        
       return a[n-1]; 
    }
};

int main()
{
	int n,start;
	cin>>n>>start;
	Solution s;
	cout<<s.xorOperation(n,start);
	return 0;
}
