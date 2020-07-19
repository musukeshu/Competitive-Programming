#include<bits/stdc++.h>
using namespace std;
class Solutions {
	public:
		 double average(vector<int>& salary) {
        
    
        return (accumulate(salary.begin(),salary.end(),0.)-*max_element(salary.begin(),salary.end())-*min_element(salary.begin(),salary.end()))/(salary.size()-2);
        
            }

};

int main()
{
	vector <int> v;
	int n,c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>c;
		v.push_back(c);
	}
	Solutions obj1;
	cout<<obj1.average(v);
	
	return 0;
}


