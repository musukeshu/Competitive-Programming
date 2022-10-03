#include<bits/stdc++.h>
using namespace std;
#define R 3
#define C 5
queue<pair<int, int> > q;
bool isSafe(int i, int j)
{
	if(i>=0&&j>=0&&i<R&&j<C)
	{
		return true;
	}
	else{
		return false;
	}
}

bool CheckRotten(int a[][C]){
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			if(a[i][j]==1){
				return true;
			}
		}
	}
	return false;
}
int rotOranges(int arr[][C]){
		for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			if(arr[i][j]==2){
				q.push(make_pair(i,j));
			}
		}
	}
	q.push(make_pair(-1,-1));
	pair<int,int> temp;
	int ans=0;
	while(!q.empty()){
		bool flag=false;
		while(q.front()!=make_pair(-1,-1))
		{
		temp=q.front();
		if(isSafe(temp.first+1,temp.second)&&arr[temp.first+1][temp.second]==1)
		{
			if(!flag){
				ans++;
				flag=true;
			}
			arr[temp.first+1][temp.second]=2;
			q.push(make_pair(temp.first+1,temp.second));
		}
		if(isSafe(temp.first,temp.second+1)&&arr[temp.first][temp.second+1]==1)
		{
			if(!flag){
				ans++;
				flag=true;
			}
			arr[temp.first][temp.second+1]=2;
			q.push(make_pair(temp.first,temp.second+1));
		}		
		if(isSafe(temp.first-1,temp.second)&&arr[temp.first-1][temp.second]==1)
		{
			if(!flag){
				ans++;
				flag=true;
			}
			arr[temp.first-1][temp.second]=2;
			q.push(make_pair(temp.first-1,temp.second));
		}		
		if(isSafe(temp.first,temp.second-1)&&arr[temp.first][temp.second-1]==1)
		{
			if(!flag){
				ans++;
				flag=true;
			}
			arr[temp.first][temp.second-1]=2;
			q.push(make_pair(temp.first,temp.second-1));
		}
		q.pop();
	  }
	  q.pop();
	  if(!q.empty())
	  {
	  	q.push(make_pair(-1,-1));
	  }
   }
   	return (CheckRotten(arr))? -1:ans;
}
int main(){
	int arr [][C]=
	{
	 {2, 1, 0, 2, 1},
     {1, 0, 1, 2, 1},
     {1, 0, 0, 2, 1}
	};
    int ans = rotOranges(arr);
    if (ans == -1)
        cout << "All oranges cannot rotn";
    else
         cout << "Time required for all oranges to rot => " << ans << endl;
    return 0;
}
