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
	int n,k;cin>>k>>n;
	
	int a[n];
	
	for(int &x:a) cin>>x;
	
	res[0]=1;
	forsum(i,0,n){
		for(int j=k;j>=a[i];j--){
			if(res[j-a[i]]) res[j]=1;
		}
	}
	
	forsub(i,k,1){
		if(res[i]) {
			cout<<i;
			return 0;
		}
	}
	
}


