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

int res[100001];
int a[100001];
int main(){
	vector<int> v;
	int n,k;cin>>n>>k;
	
	for(int i=0;i<n;i++){
		int x;cin>>x;
		v.push_back(x);
		res[x]=1;
	}
	
//	for(int i=0;i<n;i++) {
//		res[i]=1;
//	}
	 
	for(int i=0;i<=k;i++){
		for(auto &x:v){
			if(i-x>0) {
				res[i]+=res[i-x];
				res[i]%=mod;
			}
		}
	}
	
	cout<<res[k];
}

