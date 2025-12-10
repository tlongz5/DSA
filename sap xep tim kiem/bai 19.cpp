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
	int n,k;cin>>n>>k;
	int a[n];
	for(i,0,n) cin>>a[i];
	map<int,int> ma;
	int l=0;
	int dem=0;
	for(i,0,n){
		ma[a[i]]++;
		while(ma.size()>k){
			if(ma[a[l]]>1) ma[a[l]]--;
			else ma.erase(a[l]);
			l++;
		}dem+=i-l+1;
	}
	cout<<dem;
}



