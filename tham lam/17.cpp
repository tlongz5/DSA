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
	int n;cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	sort(a,a+n);
	
	ll sum1=max(1ll * a[0]*a[1],1ll * a[n-1] * a[n-2]);
	ll sum2=max(1ll * a[0]*a[1] * a[n-1],1ll * a[n-1] * a[n-2] *a[n-3]);
	
	cout<<max(sum1,sum2);
	
	
}


