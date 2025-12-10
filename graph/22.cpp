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
vector<pair<int,int>> ds;int cnt;
int color[1001];
int ok;

bool dfs(int s){
	color[s]=1;
	for(auto &x:v[s]){
		if(!color[x]){
			if(dfs(x)) return true;
		}
		else if(color[x]==1){
			return true;
		}
	}
	color[s]=2;
	return false;
}


int main(){
	cin>>n>>m;
	
	
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	for(int i=1;i<=n;i++){
		if(color[i]==0){
			if(dfs(i)) {
				cout<<1;
				return 0;
			}
		}
	}
	
	cout<<0;	
	
	
	
	
}

