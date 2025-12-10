#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>

#define AhLong int main()
#define for(i,a,b) for(int i=a;i<b;i++)

typedef long long ll;
using namespace std;

bool check(int a[],int n,int mid,int k){
	int dem=0;
	for(i,0,n){
		dem+=mid/a[i];
	}
	return dem>=k;
}
AhLong{
	int n,k;cin>>n>>k;
	int a[n];
	int Min=10e8;
	for(i,0,n) {
		cin>>a[i];
		Min=min(Min,a[i]);
	}
	int ans=-1;
	int l=Min,r=Min*k;
	while(l<=r){
		int mid=(l+r)/2;
		if(check(a,n,mid,k)) {
			ans=mid;
			r=mid-1;;
		}
		else{
			l=mid+1;
		}
	}
	cout<<ans;
}



