#include <bits/stdc++.h>

using namespace std;

struct edge{
	int x,y,w;
};

int n,m;
vector<edge> E;
int parent[100];
int sz[100];

int Find(int u){
	if(u==parent[u]) return u;
	else return parent[u]=Find(parent[u]);
}

bool union1(int u,int v){
	u=Find(u);
	v=Find(v);
	if(u==v) return false;
	if(sz[u]<sz[v]){
		swap(u,v);
	}
	parent[v]=u;
	sz[u]+=sz[v];
	return true;
	
}

void kruskal(){
	vector<edge> MST;
	int sum=0;
	sort(E.begin(),E.end(),[](edge a,edge b)->bool{
		return a.w<b.w;
	});
	
	for(edge e: E){
		if(MST.size()==n-1) break;
		
		if(union1(e.x,e.y)){
			sum+=e.w;
			MST.push_back(e);
		}
	}
	
	if(MST.size()==n-1){
		cout<<sum<<endl;
	}
	else cout<<"IMPOSSIBLE"<<endl;
}

int main(){
	cin>>n>>m;
	
	for(int i=0;i<m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		E.push_back({x,y,w});
	}
	
	for(int i=1;i<=n;i++){
		parent[i]=i;
		sz[i]=1;
	}
	kruskal();
	
}
