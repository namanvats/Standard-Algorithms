//depth first traversal algorithm for a graph having number of nodes in graph less than 10000
#include<bits/stdc++.h>
using namespace std; 
bool visit[10005];
vector<int> vec[10000];
void initial()
{
		for(int i=0;i<10000;i++)
			visit[i]=0;
}
void dfs(int s)
{
	visit[s]=1;
	cout<<s<<'\n';
	for(int i=0;i<vec[s].size();i++)
		{
			if(!visit[vec[s][i]])
				dfs(vec[s][i]);
		}
}
int main()
{
	initial();
	int nodes,edges,source;
	cin>>nodes>>edges>>source;
	for(int i=0;i<edges;i++)
	{
		int x,y;
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	dfs(source);
	return 0;
}
