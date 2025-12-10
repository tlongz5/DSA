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

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
#define MAX 505

const int mod=1e9+7;

//int res[100001];
//
//int dx[]={0,1,1};
//int dy[]={1,1,0};
//
//int cnt,n,m;
//
//void loang(int a[][MAX],int i,int j,int sum){
//	if(i==n&&j==m) cnt=max(sum,cnt);
//	for(int k=0;k<3;k++){
//		int x1=i+dx[k];
//		int y1=j+dy[k];
//		if(x1<=n&&y1<=m) loang(a,x1,y1,sum+a[x1][y1]);
//	}
//}
//
//int main(){
//	cin>>n>>m;
//	int a[MAX][MAX];
//	
//	for(int i=1;i<=n;i++){
//		for(int j=1;j<=m;j++){
//			cin>>a[i][j];
//		}
//	}
//	
//	for(int i=1;i<=n;i++){
//		loang(a,1,i,a[1][i]);
//	}
//	cout<<cnt;
//}


//c2
int a[MAX][MAX];
int main(){
	int n,m;cin>>n>>m;
	
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i==1) a[i][j]+=a[i][j-1];
			else if(j==1) a[i][j]+=a[i-1][j];
			else a[i][j]+=max({a[i-1][j-1],a[i-1][j],a[i][j-1]});
		}
	}
	cout<<a[n][m];
}

