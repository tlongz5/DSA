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

struct dovat{
	int kg,gt;
};

int main(){
	int n,k;cin>>n>>k;
	
	dovat a[n];
	
	forsum(i,0,n) cin>>a[i].kg;
	forsum(i,0,n) cin>>a[i].gt;
	
	forsum(i,0,n){
		forsub(j,k,a[i].kg) {
			res[j]=fmax(res[j],res[j-a[i].kg]+a[i].gt);
		}
	}
	 
	 cout<<res[k];
}

