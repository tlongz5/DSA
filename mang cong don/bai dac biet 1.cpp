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
    int a[n];
    int cnt=0;
	for(i,0,n) {
		cin>>a[i];
		if(a[i]) cnt++;
	}
	if(cnt<k) {
		cout<<-1;
		return 0;
	}
	int sum=0;
	for(i,0,k) sum+=a[i];
	int dem=sum;
	for(i,k,n) {
		sum+=a[i]-a[i-k];
		dem=max(dem,sum);
	}
	if(dem==k) cout<<0;
	else cout<<k-dem;
}


