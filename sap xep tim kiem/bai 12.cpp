#include <bits/stdc++.h>

#define AhLong int main()
#define for(i,a,b) for(int i=a;i<b;i++)

typedef long long ll;
using namespace std;

AhLong{
    int n,k;cin>>n>>k;
    int a[n];
    for(i,0,n) cin>>a[i];
    int dem=0;
    sort(a,a+n);
    int i=0,j=n-1;
    while(i<j){
    	if(abs(a[i]+a[j])<=k){
    		++dem;
    		++i;--j;
		}
		else {
			++dem;
			j--;
		}
	} if(i==j)++dem;
	cout<<dem;
}


