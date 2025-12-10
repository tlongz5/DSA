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
int parent[1001];

void bfs(int s){
	queue <int> q;
	q.push(s);
	visited[s]=1;
	while(q.size()){
		int a=q.front();
		cout<<a<<" ";
		q.pop();
		if(a==t) return ;
		for(int &x: v[a]){
			if(!visited[x]){
				visited[x]=1;
				q.push(x);
			}
		}
	}
}

void BFS(int s){
	queue<int> q;
	q.push(s);
	visited[s]=1;
	while(!q.empty()){
		int u=q.front();q.pop();
		for(int x:v[u]){
			if(!visited[x]){
				parent[x]=u;
				q.push(x);
				visited[x]=true;
			}
		}
	}
}

void path(int s,int t){
	BFS(s);
	if(!visited[t]){
		cout<<-1;
	}
	else{
		vector<int> duong;
		while(s!=t){
			duong.push_back(t);
			t=parent[t];
		}
		duong.push_back(s);
		reverse(duong.begin(),duong.end());
		for(int x:duong) cout<<x<<" ";
	}
}

int main(){
	cin>>n>>m>>s>>t;
	
	
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	for(int i=1;i<=n;i++){
		sort(v[i].begin(),v[i].end());
	}
	
	path(s,t);
	
}

