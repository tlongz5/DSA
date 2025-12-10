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
vector<int> v_ke[100];
int color[100];
stack<int> st;

void dfs1(int u){
	color[u]=1;
	for(auto &x: v[u]){
		if(!color[x]){
			dfs1(x);
		}
	}
	st.push(u);
}

void dfs2(int u){
	color[u]=1;
	for(auto &x: v_ke[u]){
		if(!color[x]){
			dfs2(x);
		}
	}
}
int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
		v_ke[y].push_back(x);
	}
	
	int cnt=0;
	
	for(int i=1;i<=n;i++){
		if(!color[i]) {
			dfs1(i);
		}
	}
	memset(color,false,sizeof(color));
	
	while(st.size()){
		int x=st.top();
		st.pop();
		if(!color[x]){
			dfs2(x);
			++cnt;
		}
	}
	
	cout<<cnt;
}

