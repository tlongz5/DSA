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
int a[100001];
int main(){
	
	int n;cin>>n;
	
	a[0]=1;
	forsum(i,1,n+1){
		for(int j=1;j<=min(6,i);j++){
			a[i]+=a[i-j];
			a[i]%=mod;
		}
	}
	
	cout<<a[n];
	
	
}

