#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,j,x,y,q;
	cin>>n;
	cin>>m;
	int g[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			g[i][j]=0;
		}
	}
	for (i=0;i<m;i++)
	{
		cin>>x;
		cin>>y;
		g[x][y]=1;
		g[y][x]=1;
	}
	cin>>q;
	while(q--)
	{
		cin>>x;
		cin>>y;
		if(g[x][y]==1 && g[y][x]==1)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}