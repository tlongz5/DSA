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

bool check(int a[],int n,int k,int mid){
	int sum=0;
	int dem=1;
	for(i,0,n){
		sum+=a[i];
		if(sum>mid) {
			dem++;
			sum=a[i];
	}
	}
	return dem<=k;
}

AhLong{
	int n,k;cin>>n>>k;
	int a[n];
	int r=0;
	
	for(i,0,n) {
		cin>>a[i];
		r+=a[i];
	}
	
	int l=*max_element(a,a+n);
	int ans;
	while(l<=r){
		int mid=(l+r)/2;
		if(check(a,n,k,mid)) {
			ans=mid;
			r=mid-1;
		}
		else {
			l=mid+1;
			
		}
	}
	cout<<ans;
}



