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
    int n;cin>>n;
    int a[n];
    for(i,0,n) cin>>a[i];
    sort(a,a+n);int dem=a[0];
    int cnt=0;
    for(i,0,n){
    	if(dem!=a[i]) {
    		cnt+=a[i]-a[i-1]-1;
    		dem=++a[i];
		}
    	else dem++;
	}
    cout<<cnt;
}


