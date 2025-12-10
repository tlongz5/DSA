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
		}
	}
}

int tplt(){
		int count=0;
		for(int i=1;i<=n;i++){
			if(!visited[i]){
			count++;
			dfs(i);
			}
		}
		return count;
}


int main(){
	cin>>n>>m;
	
	
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		v[x].insert(y);
		v[y].insert(x);
		ds.push_back({x,y});
	}
	
	int cc=tplt();
	for(auto &it:ds){
		int x=it.first;
		int y=it.second;
		v[x].erase(y);
		v[y].erase(x);
		memset(visited,0,sizeof(visited));
		if(cc<tplt()) cnt++;
		v[x].insert(y);
		v[y].insert(x);
	}
	cout<<cnt;
	
	
	
	
	
	
	
}

