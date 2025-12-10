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

vector<string> v;
void solve(int n,int cnt0,int cnt1,string s){
	if(cnt1==n/2) {
		v.push_back(s);
		return ;
	}
	
	if(cnt0<n/2){
		s+='(';
		solve(n,cnt0+1,cnt1,s);
		s.pop_back();
	}
	
	if(cnt1<cnt0){
		s+=')';
		solve(n,cnt0,cnt1+1,s);
		s.pop_back();
	}
	
}

int main(){
	int n;cin>>n;
	solve(n,0,0,"");
	sort(v.begin(),v.end());
	cout<<v.size()<<endl;
	for(auto &x:v) cout<<x<<endl;
	
}
