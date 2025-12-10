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

vector<int> v[100];
int color[100];
int parent[100];

void DFS(int u){
	color[u]=1;
	for(auto &x: v[u]){
		if(!color[x]){
			parent[x]=u;
			DFS(x);
		}
	}
}

int dfs(int u){
	
	color[u]=1;
	for(auto &x: v[u]){
		if(!color[x]){
			if(dfs(x)) return true;
		}
		else if(x!=parent[x]) return true;
		
	}
	return false;
}

int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	int cnt=0;
	forsum(i,1,n+1){
		if(!color[i]){
			DFS(i);
			++cnt;
		}
	}
	
	memset(color,0,sizeof(color));
	
	if(cnt==1 && !dfs(1)) cout<<1;
	else cout<<0;
	
}

