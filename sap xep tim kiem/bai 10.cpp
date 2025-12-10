#include <bits/stdc++.h>

#define AhLong int main()
#define for(i,a,b) for(int i=a;i<b;i++)

typedef long long ll;
using namespace std;

AhLong{
    int n;cin>>n;
    int a[n];
    for(i,0,n) cin>>a[i];
    sort(a,a+n);
    int dem=0;
    for(i,0,n-1){
    	dem=max(a[i+1]-a[i],dem);
	}
	cout<<fixed<<setprecision(10)<<(double)dem/2;
	
}


