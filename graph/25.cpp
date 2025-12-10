#include <bits/stdc++.h>

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
#define MAX 505

const int mod=1e9+7;
using namespace std;


vector<int> v[100];
int parent[1000];
int visited[100];


void dfs(int i){
	visited[i]=1;
	for(int &x: v[i]){
		if(visited[x] ==0 ) dfs(x);
	}
}



int main(){
	int n,m;cin>>n>>m;
	
	int a[n][m];
	
	
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	
	int cnt=0;
	vector<int> in;
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			dfs(i);
			++cnt;
			in.push_back(i);
		}
	}
	
	cout<<cnt-1<<endl;
	for(int i=1;i<in.size();i++){
		cout<<in[i-1]<<" "<<in[i]<<endl;
	}
	
}
