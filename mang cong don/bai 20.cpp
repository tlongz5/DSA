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
    for(i,0,n) cin>>a[i];
    int sum=0;
    int l=0;
    int dem=0;
    for(i,0,n){
    	sum+=a[i];
    	while(sum>=k){
    		dem+=n-i;
    		sum-=a[l];
    		l++;
		}
	}
	cout<<dem;
    
}


