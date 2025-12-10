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

int res[1001];

int main(){
	int n;cin>>n;
	int a[n];
	for(auto &x:a) cin>>x;
	
	res[0]=a[0];
	res[1]=a[1];
	
	for(int i=2;i<n;i++){
		res[i]=max(res[i-1],a[i]+res[i-2]);
	}
	
	cout<<res[n-1];
	
}

