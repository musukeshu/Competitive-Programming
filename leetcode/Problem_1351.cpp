#include<bits/stdc++.h>
using namespace std;
class Problem1351 {
	
	public:
	int countNegatives(vector<vector<int> >& grid) {
        
        int i,j;
        int count=0;
        for(i=grid.size()-1;i>=0&&grid[i].back()<0;i--)
        {
            for(j=grid[i].size()-1;j>=0&&grid[i][j]<0;j--)
            {
                count++;
            }
        }
        
        return count;
    }
};

int main()
{
	vector<vector<int> > v;
	vector<int> v1;
	int m,n,i,j,c;
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>c;
			v1.push_back(c);
		}
		v.push_back(v1);
	}
	Problem1351 p;
	cout<<p.countNegatives(v);
}
