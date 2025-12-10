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

solve(){
	int n,m;cin>>n>>m;
	vector<vector<int>> a(n,vector<int>(m)),b(n,vector<int>(m)),c(m,vector<int>(n)),d(m,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) {
			cin>>a[i][j];
			c[j][i]=a[i][j];
		}
		
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) {
			cin>>b[i][j];
			d[j][i]=b[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		sort(b[i].begin(),b[i].end());
		sort(a[i].begin(),a[i].end());
	}
	forsum(j,0,m){
		sort(c[j].begin(),c[j].end());
		sort(d[j].begin(),d[j].end());
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	sort(c.begin(),c.end());
	sort(d.begin(),d.end());
	
	
	
	
	
	forsum(i,0,m){
		forsum(j,0,n) cout<<c[i][j]<<" ";
		cout<<endl;
	}
	
	forsum(i,0,m){
		forsum(j,0,n) cout<<d[i][j]<<" ";
		cout<<endl;
	}
	forsum(i,0,n){
		forsum(j,0,m) if(a[i][j]!=b[i][j]) return 0;
	}
	forsum(j,0,m){
		forsum(i,0,n) if(c[j][i]!=d[j][i]) return 0;
	}
	
	return 1;
	
}

int main(){
	int t;cin>>t;
	while(t--){
		cout<<(solve()==0? "NO":"YES")<<endl;
	}	
	
}
