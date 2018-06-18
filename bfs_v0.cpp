//Implementation of BFS and to calculate distance of each node from root node.
//author:naman vats
#include<bits/stdc++.h>
using namespace std;
#define MAX5 100010
#define MAX6 1000010
#define pb push_back
#define pf push_front
#define mp make_pair
#define mod 1000000007
#define all(a) a.begin(),a.end()
typedef long long int ll;typedef long int l;typedef pair<int,int> pii;
ll modd(ll x){if(x>=0)return x;else return -1*x;}
ll dist[MAX5];bool visit[MAX5];
vector<int> vec[MAX5];
queue<ll> q;
void bfs(ll src)
{
    memset(visit,0,sizeof(visit));
    dist[src]=0;    
    q.push(src);
    while(q.size()!=0)
    {
        ll p=q.front();
        q.pop();
        visit[p]=1;
        for(int i=0;i<vec[p].size();i++)
        {
            if(visit[vec[p][i]]==0)
            {
                q.push(vec[p][i]);
                dist[vec[p][i]]=dist[p]+1;
                visit[vec[p][i]]=1;
            }
        }
    }
}
int main()
{
    //nodes>=1
    ll nodes,edges;
    cin>>nodes>>edges;
    for(ll i=0;i<edges;i++)
    {
        //undirected edges
        ll x,y;
        cin>>x>>y;
        vec[x].pb(y);
        vec[y].pb(x);
    }
    ll src;
    cin>>src;
    bfs(src);
    //taking nodes from 1
    for(int i=1;i<=nodes;i++)
    {
        cout<<dist[i]<<" ";
    }
return 0;
}
