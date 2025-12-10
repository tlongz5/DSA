#include <bits/stdc++.h>

using namespace std;

#define forsum(i,a,b) for(int i=a;i<b;i++)
#define sorsub(i,a,b) for(int i=a;i>=b;i--)
#define pb push_back
#define ll long long
#define vi vector<int>
#define vii vector<vector<int>>
#define ms(arr, v) memset(arr, v, sizeof(arr))
#define fix(prec) {cout << setprecision(prec) << fixed;}
#define pii pair<int,int>
#define pll pair<ll,ll>
int const mod=1e9+7;
const int N=105;

int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
int n,m;
int a[N][N];

bool check(int x,int y){
	return x<n && y<m && x>=0 && y>=0 ;
}

int backtrack(int i,int j){
	a[i][j]=0;
	int sum=1;
	for(int k=0;k<4;k++){
		int x= dx[k]+i;
		int y= dy[k]+j;
		if(check(x,y) && a[x][y]==1) sum+= backtrack(x,y);
	}
	return sum;
}

void solve(int cas){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) cin>>a[i][j];
	}
	int sum=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]) sum=max(sum,backtrack(i,j));
		}
	}
	cout<<"Case #"<<cas<<": "<<sum<<endl;
}

int main(){
//	freopen("txt.in","r",stdin);
//	freopen("txt.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;cin>>t;
	for(int i=1;i<=t;i++) {
		solve(i);
	}
	
}
