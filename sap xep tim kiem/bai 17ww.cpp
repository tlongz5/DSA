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
//    int n,k;cin>>n>>k;
//    int a[n];
//    for(i,0,n) cin>>a[i];
//    int l=0;
//    int sum=0;
//    int dem=0;
//    for(i,0,n){
//    	sum+=a[i];
//    	while(sum > k){
//    		sum-=a[l];
//    		l++;
//		}
//		while(sum==k){
//			dem++;
//		}
//	}
//	cout<<dem;

	map<int,int> ma;
	int sum=0;
	ma[0]=1;
	int dem=0;
	int n,k;cin>>n>>k;
	for(i,0,n){
		int a;cin>>a;
		sum+=a;
		dem+=ma[sum-k];
		ma[sum]++;
	}
	cout<<dem;
}



