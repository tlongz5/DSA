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

int dfs(int u){
	color[u]=1;
	for(auto &x: v[u]){
		if(!color[x]){
			if(dfs(x)) return true;
		}
		else if(color[x]==1) return true;
		
	}
	color[u]=2;
	return false;
}

int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
	}
	
	forsum(i,1,n+1){
		if(!color[i]){
			if(dfs(i)) {
				cout<<1;
				return 0;
			}
		}
	}
	
	cout<<0;
	
}

