#include <bits/stdc++.h>

#define AhLong int main()
#define for(i,a,b) for(int i=a;i<b;i++)

typedef long long ll;
using namespace std;

AhLong{
    int n,m;cin>>n>>m;
    int a[n],b[m];
    for(i,0,n) cin>>a[i];
    for(i,0,m) cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int i=0,j=0;
    int dem=0;
    while(i<n&&j<m){
    	if(abs(a[i]-b[j])<2) {
    		dem++;
    		++i;
    		++j;
    		continue;
		} 
		if(a[i]>b[j]) ++j;
		else ++i;
	}
	cout<<dem;
}


