#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <utility>
#include <cmath>
#include <sstream>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
#define MAX 505

const int mod=1e9+7;

int visited[100];
int n,m,s,t;
vector<int> v[100];
vector<pair<int,int> > ds;
int cnt;
int parent[1001];
int ok;

int find(int u){
	if(u==parent[u]) return u;
	
	return parent[u]=find(parent[u]);
}

bool Union(int u,int v){
	u=find(u);
	v=find(v);
	if(u==v) return 0;
	else {
		if(u<v) parent[v]=u;
		else parent[u]=v;
		return 1;
	}
}

int main(){
	cin>>n>>m;
	
	
	for(int i=1;i<=n;i++){
		parent[i]=i;
	}
	
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		Union(x,y);
	}	
	
	for(int i=1;i<=n;i++){
		if(i==parent[i]){
			cnt++;
		}
	}
	
	if(cnt!=1) cout<<0;
	else cout<<1;
	
	
}

