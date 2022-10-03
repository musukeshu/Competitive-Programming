#include<bits/stdc++.h>
using namespace std;
class Graph{
	int V;
	list<int> * adj;
	public:
	Graph(int V){
		this->V=V;
		adj=new list<int>[V];
	}
	void addEdge(int u, int v)
	{
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bool isCyclic()
	{
		bool *visited = new bool[V];
		for(int i=0;i<V;i++)
		{
			visited[i]=false;
		}
		for(int u=0;u<V;u++)
		{
			if(!visited[u])
			{
				if(isCycleUtil(u,visited,-1))
				return true;
			}
		}
		return false;
	}
	
	bool isCycleUtil(int v, bool * visited, int parent)
	{
		visited[v]=true;
		list<int>::iterator it;
		for(it=adj[v].begin();it!=adj[v].end();it++)
		{
			if(!visited[*it])
			{
				if(isCycleUtil(*it,visited,v))
				{
					return true;
				}
			}
			else if(*it!=parent)
			{
				return true;
			}
		}
		return false;
	}
};

int main()
{
	Graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 1);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.isCyclic()?
       cout << "Graph contains cycle\n":
       cout << "Graph doesn't contain cycle\n";
 
    Graph g2(3);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.isCyclic()?
       cout << "Graph contains cycle\n":
       cout << "Graph doesn't contain cycle\n";
 
    return 0;
}
