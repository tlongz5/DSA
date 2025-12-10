#include <bits/stdc++.h>

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
#define MAX 505

const int mod=1e9+7;
using namespace std;

struct edge{
	int x,y,w;
};

int n,m;
int sz[10001],parent[100001];
vector<edge> dscanh;

void ktao(){
	for(int i=1;i<=n;i++){
		sz[i]=1;
		parent[i]= i;
	}
}

int Find(int u){
	if(u== parent[u]){
		return u;
	}
	else return parent[u]=Find(parent[u]);
}

bool Union(int u,int v){
	u=Find(u);
	v=Find(v);
	if(u==v){
		return false;
	}
	if(sz[u]>sz[v]){
		parent[v]=u;
		sz[u]+= sz[v];
	}
	else{
		parent[u]=v;
		sz[v]+=sz[u];
	}
	return true;
}

void nhap(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y,w;
		cin>>x>>y>>w;
		edge e{x,y,w};
		dscanh.push_back(e);
	}
}

bool cmp(edge a,edge b){
	return a.w<b.w;
}

void kruskal(){
	vector<edge> MST;
	sort(dscanh.begin(),dscanh.end(),cmp);
	int d=0;
	for(int i=0;i<m;i++){
		if(MST.size()==n-1) break;
		edge e=dscanh[i];
		if(Union(e.x,e.y)){
			MST.push_back(e);
			d+= e.w;
		}
	}
	
	cout<<d<<endl;
	for(auto it: MST){
		cout<<it.x<<' '<<it.y<<' '<<it.w<<endl;
	}
}

int main(){
	ktao();
	nhap();
	kruskal();
}

