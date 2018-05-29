#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 
ll visit[100000];
vector<ll> vec[1000];
void initial()
{
		for(int i=0;i<100000;i++)
			visit[i]=0;
}
void dfs(int s)
{
	visit[s]=1;
	cout<<s<<'\n';
	for(int i=0;i<vec[s].size();i++)
		{
			if(!visit[vec[s][i]])
				{
					dfs(vec[s][i]);
				}
		}
}
int main()
{
	initial();
	int nodes,edges,x,y;
	cin>>nodes>>edges;
	for(int i=0;i<edges;i++)
		{
			cin>>x>>y;
			vec[x].push_back(y);
		}
	int source;
	cin>>source;
	dfs(source);
	return 0;
}
