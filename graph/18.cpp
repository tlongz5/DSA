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
vector<int> vi;int cnt;
int parent[1001];
int ok;

void bfs(int s){
	visited[s]=1;
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		int a=q.front();
		q.pop();
		for(auto &x: v[a]){
			if(!visited[x]){
				visited[x]=1;
				q.push(x);
			}
		}
	}
}

int tplt(){
		int count=0;
		for(int i=1;i<=n;i++){
			if(!visited[i]){
			count++;
			bfs(i);
			}
		}
		return count;
}

void dinhtru(){
	int cc=tplt();
	for(int i=1;i<=n;i++){
		memset(visited,0,sizeof(visited));
		visited[i]=true;
		if(cc<tplt()) cnt++;
	}
	cout<<cnt;
}

int main(){
	cin>>n>>m;
	
	
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	for(int i=1;i<=n;i++){
		sort(v[i].begin(),v[i].end());
	}
	
	
	dinhtru();
	
	
	
}

