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
    sort(a,a+n);
   	int *p=a;
    int dem=0;
    for(i,0,n){
    	int *x=p+i+1;
    	int j=k-a[i];
    	int* lower=lower_bound(a+i+1,a+n,j);
    	dem+=lower-x;
	}
	cout<<dem;
    
}


