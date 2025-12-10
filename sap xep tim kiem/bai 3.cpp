#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <utility>
#include <string>
#include <algorithm>

#define AhLong int main()
#define for(i,a,b) for(int i=a;i<b;i++)

typedef long long ll;
using namespace std;

AhLong{
    int n,k;cin>>n>>k;
    int a[n+1];
    a[0]=0;
    for(i,1,n+1) cin>>a[i];
	sort(a,a+n+1);
	int dem=0;
	for(i,1,n+1){
		if(a[i]-a[i-1]>k) dem++;
	}
	cout<<dem;
}

