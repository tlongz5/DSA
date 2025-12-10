#include <bits/stdc++.h>

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
#define MAX 505

const int mod=1e9+7;
using namespace std;


int parent[1000];
int visited[100];
int sz[100];
int check=0;
int n,s,t,u,v;

struct kt{
	int i,j,d;
};

int dx[]={-2,-1,1,2,2,1,-1,-2};
int dy[]={1,2,2,1,-1,-2,-2,-1};

int main(){

	cin>>n>>s>>t>>u>>v;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int d=0;
	
	queue<kt> q;
	q.push({s,t,d});
	a[s][t]=0;
	while(!q.empty()){
		auto it=q.front();q.pop();
		int i=it.i,j=it.j,d=it.d;
		if(i==u && j==v) {
			cout<<d<<endl;
			return 0;
		}
		for(int k=0;k<8;k++){
			int i1=i+dx[k], j1=j+dy[k];
			if(i1>0&&j1>=0 && i1<n && j1<n){
				q.push({i1,j1,d+1});
				a[i1][j1]=0;
			}
		}
	}
	cout<<-1;
	
}
