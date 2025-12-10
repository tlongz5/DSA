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
set<int> v[100];
vector<pair<int,int>> ds;int cnt;
int parent[1001];
int ok;

void dfs(int s){
	visited[s]=1;
	for(auto &x:v[s]){
		if(!visited[x]){
			dfs(x);
			parent[x]=s;
		}
		else if(x!=parent[s]){
			ok=1;
		}
	}
}


int main(){
	cin>>n>>m;
	
	
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		v[x].insert(y);
		v[y].insert(x);
		ds.push_back({x,y});
	}
	
	dfs(1);
	if(ok) cout<<1;
	else cout<<-1;
	
	
	
	
	
	
	
}

