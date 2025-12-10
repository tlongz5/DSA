#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> pii;
int n,m;
bool taken[100];
vector<pii> adj[1001];
int dist[100];


void Dijkstra(int s){
	priority_queue<pii,vector<pii> ,greater<pii>> Q;
	Q.push({0,s});
	vector<int> d(n+1,1e9);
	d[s]=0;
	while(!Q.empty()){
		pii t=Q.top();Q.pop();
		int dis=t.first,u=t.second;
		if(dis>d[u]) continue;
		for(pii e: adj[u]){
			int v=e.first,w=e.second;
			if(d[v]>d[u]+w){
				d[v]=d[u]+w;
				Q.push({d[v],v});
			}
		}
	}
	
	for(int i=1;i<=n;i++){
		cout<<d[i]<<" ";
	}
}

int main(){
	cin>>n>>m;
	
	for(int i=0;i<m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		adj[x].push_back({y,w});
		adj[y].push_back({x,w});
	}
	
	Dijkstra(1);
	
}
