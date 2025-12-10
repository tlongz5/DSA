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
    int sum=0,dem=10e8,l=0,left=0,right=0;
    for(i,0,n){
    	sum+=a[i];
    	while(sum>=k){
    		if(dem>i-l+1){
    			dem=i-l+1;
    			left=l;
    			right=i;
			}
			sum-=a[l];
			l++;
		}
	}
	for(i,left,right+1){
		cout<<a[i]<<" ";
	}
}


