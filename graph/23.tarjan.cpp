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

int visited[1001];
int n,m,s,t;
int low[10001],disc[10001];
int timer;
vector<int> v[10001];

void dfs(int s){
	visited[s]=1;
	low[s]=disc[s]=++timer;
	
	for(int &x:v[s]){
		if(!visited[x]) {
			dfs(x);
			low[s]=min(low[s],low[x]);
		}
		else {
			low[s]=min(low[s],disc[x]);
		}
	}
}


int main(){
	cin>>n>>m;
	
	
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
	}cout<<endl;
	
	for(int i=1;i<=n;i++){
		if(!visited[i]) dfs(i);
	}	
	
	for(int i=1;i<=n;i++){
		cout<<disc[i]<<' '<< low[i]<<endl;
	}
	
	
	
	
}

