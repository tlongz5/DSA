#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
 
int main(){
	queue <ll> q;
	vector<ll> v;
	
	q.push(1);
	
	while(1){
		ll ans = q.front();
		q.pop();
		v.push_back(ans);
		if(q.front()>=1e18) break;
		q.push(ans*10);
		q.push(ans*10+1);
	}
	
	int n;cin>>n;
	while(n--){
		int m;cin>>m;
		for(auto x:v){
			if(x%m==0) {
				cout<<x<<endl;
				break;
			}
		}
	}
}
