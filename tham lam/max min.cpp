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

const int mod=1e9+7;

int main(){
	int n,k;cin>>n>>k;
	int a[n];
	for(auto &x:a) cin>>x;
	sort(a,a+n);
	
	int ans=1e9;
	for(int i=0;i<=n-k;i++){
		ans=min(ans,a[i+k-1]-a[i]);
	}cout<<ans;
}


