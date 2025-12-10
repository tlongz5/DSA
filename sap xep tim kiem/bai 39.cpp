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

AhLong{
	int n;cin>>n;
	int a[n],b[n];
	for(i,0,n) cin>>a[i];
	sort(a,a+n);
	b[0]=a[0];
	for(i,1,n){
		b[i]=b[i-1]+a[i];
	}
	for(i,0,n) cout<<b[i]<<" ";
	
}



