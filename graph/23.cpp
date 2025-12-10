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
vector<int> ke[10001],t_ke[10001];
stack<int> st;
int cnt;

void dfs1(int s){
	visited[s]=1;
	for(int &x:ke[s]){
		if(!visited[x]) dfs1(x);
	}
	st.push(s);
}

void dfs2(int s){
	visited[s]=1;
	for(int &x:t_ke[s]){
		if(!visited[x]) dfs2(x);
	}
}

void kosaraju(){
	for(int i=1;i<=n;i++){
		if(!visited[i]) dfs1(i);
	}
	memset(visited,false,sizeof(visited));
	
	while(st.size()){
		int top=st.top();st.pop();
			if(!visited[top]) {
				dfs2(top);
				++cnt;
			}
	}10 16
9 10
6 4
6 1
6 3
9 2
3 9
9 4
3 8
3 5
6 7
6 10
9 6
6 8
3 7
6 5
9 7

}

int main(){
	cin>>n>>m;
	
	
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		ke[x].push_back(y);
		t_ke[y].push_back(x);
	}
	
	kosaraju();
	
	if(cnt==1) cout<<1;
	else cout<<0;	
	
	
	
	
}

