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

int res[1000001];

int main(){
	int n;cin>>n;
	int a[n];
	for(auto &x:a) cin>>x;
	
	res[0]=1;
	forsum(i,0,n){
		if(a[i]>a[i-1]) res[i]=res[i-1]+1;
		else res[i]=1;
	}

	forsub(i,n-2,0){
		int tmp=res[i];
		if(a[i]>a[i+1]){
			tmp=res[i+1]+1;
		}
		res[i]=max(tmp,res[i]);
	}
	
	int ans=0;
	for(auto &x:res) ans+=x;
	cout<<ans;
}


