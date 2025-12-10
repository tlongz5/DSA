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
	int n,k;cin>>n>>k;
	
	res[0]=1;
	
	forsum(i,1,n+1){
		forsum(j,1,min(i,k)+1){
			res[i]+=res[i-j];
			res[i]%=mod;
		}	
	}
	
	cout<<res[n];
	
}


