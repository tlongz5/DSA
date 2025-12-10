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
bool check(int x,int y,int n,int mid){
	int sum=(mid-x)/x+(mid-x)/y+1;
	return sum>=n;
}
AhLong{
	int n,x,y;cin>>n>>x>>y;
	int l=min(x,y),r=max(x*n,y*n);
	int ans;
	while(l<=r){
		int mid=(l+r)/2;
		if(check(x,y,n,mid)){
			r=mid-1;
			ans=mid;
		}
		else l=mid+1;
	}
	cout<<ans;
}



