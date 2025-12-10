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
int parent[100];

int ok;
int f[100];

int find(int x){
	if(x==parent[x]) return x;
	return parent[x]=find(parent[x]);
}

void Union(int u,int v){
	u=find(u);
	v=find(v);
	if(u==v) return ;
	else{
		if(u<v) parent[v]=u;
		else parent[u]=v;
	}
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		parent[i]=i;
	}
	
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		Union(x,y);
	}
	
	int cnt=0;
	for(int i=1;i<=n;i++){
		if( i==parent[i]) ++cnt;
	}
	
	cout<< (cnt==1);
	
	
	
}

