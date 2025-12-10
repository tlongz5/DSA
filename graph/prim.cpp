#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> pii;
int n,m;
bool taken[100];
vector<pii> adj[1001];

void prim(int s){
	priority_queue<pii,vector<pii> ,greater<pii>> Q;
	taken[s]=true;
	int d=0;
	for(pii x: adj[s]){
		if(!taken[x.first]){
			Q.push({x.second,x.first});
		}
	}
	
	while(!Q.empty()){
		pii top =Q.top();Q.pop();
		int u=top.second,w=top.first;
		if(!taken[u]){
			d+=w;
			taken[u]=1;
			for(pii x:adj[u]){
				if(!taken[x.first]){
					Q.push({x.second,x.first});
				}
			}
		}
	}
	cout<<d<<endl;
}

int main(){
	cin>>n>>m;
	
	for(int i=0;i<m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		adj[x].push_back({y,w});
		adj[y].push_back({x,w});
	}
	
	prim(1);
	
}
