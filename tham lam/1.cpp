#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>
#include <cstring>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
 
int main(){
	freopen("DINHGIA.INP","r",stdin);
	freopen("DINHGIA.OUT","w",stdout);
	vector<int> v;
	int n,k;cin>>n>>k;
	for(int i=0;i<k;i++){
		int x;cin>>x;
		v.push_back(x);
	}
	
	sort(v.begin(),v.end(),greater<int>());
	
	ll sum=0;
	int cnt=1e7;
	for(int i=0;i<k;i++){
		if(i==n) break;
		ll tmp=1ll * v[i] * (i+1);
		if(tmp>sum){
			sum=tmp;
			cnt=i+1;
		}else if(tmp==sum){
			cnt=min(cnt,i+1);
		}
	}
	cout<<sum/cnt<<" "<<sum;
}

