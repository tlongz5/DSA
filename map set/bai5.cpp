#include <bits/stdc++.h>
#define MAX 105
using namespace std;
int dx[]={0,-1,0,1};
int dy[]={-1,0,1,0};
int s,v,u,t;
int n,m;
int check=0;
int a[105][105];
bool loang(int a[][MAX],int s,int t){
	if(s==u&&t==v) {
		check=1;
	}
	else{
	a[s][t]=0;
	for(int i=0;i<4;i++){
		int i1=s+dx[i];
		int j1=t+dy[i];
		if(i1<n&&i1>=0&&j1<m&&j1>=0&&a[i1][j1]){
			loang(a,i1,j1);
		}
	}
}
	return check;
}
int main(){
	cin>>n>>m;
	cin>>s>>t>>u>>v;
	--s;
	--t;
	--u;--v;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	if(loang(a,s,t)) cout<<"YES";
	else cout<<"NO";
}

