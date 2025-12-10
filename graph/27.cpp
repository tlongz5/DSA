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
int sz[100];
int check=0;


void dfs(int i){
	check++;
	visited[i]=1;
	for(int &x: v[i]){
		if(!visited[x]) dfs(x);
	}
}

int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
		
	}
	
	int sum=0;
	for(int i=1;i<=n;i++){
		if(!visited[i]){
			dfs(i);
			sum=max(check,sum);
			check=0;
		} 
	}
	
	cout<<sum;
}
