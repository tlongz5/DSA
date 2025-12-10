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
	for(int &x:a) {
		cin>>x;
	}
	
	int cnt=0;
	forsum(i,0,n){
		res[i]=1;
		forsum(j,0,i){
			if(a[j]<a[i]) res[i]=max(res[i],res[j]+1);
			cnt=max(res[i],cnt);
		}
	}
	
	cout<<n-cnt;
}


