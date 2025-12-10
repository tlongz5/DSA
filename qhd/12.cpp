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
	
	int cnt=0;
	
	forsum(i,1,n){
		res[i]=a[i];
		forsum(j,0,i){
			if(a[i]>a[j]) res[i]=max(res[i],res[j]+a[i]);
		}
		cnt=max(cnt,res[i]);
	}
	cout<<cnt;
	
	
}

