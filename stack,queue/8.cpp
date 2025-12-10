#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)

int size(ll x){
	int cnt=0;
	while(x){
		cnt++;
		x/=10;
	} 
	return cnt;
}
 
int main(){
	queue <ll> q;
	vector<ll> v;
	
	q.push(0);
	
	while(1){
		ll ans = q.front();
		q.pop();
		if(ans) v.push_back(ans);
		if(q.front()>=1e18) break;
		q.push(ans*10+6);
		q.push(ans*10+8);
	}
	sort(v.begin(),v.end(),greater<ll>());
	
	int n;cin>>n;
	while(n--){
		int m;cin>>m;
		for(auto x:v){
			if(size(x)<=m) {
				cout<<x<<" ";
			}
		}cout<<endl;
	}
}
