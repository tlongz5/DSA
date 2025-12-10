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
    int n,m;cin>>n>>m;
    int a[n],b[m];
    for(i,0,n) cin>>a[i];
    for(i,0,m) cin>>b[i];
    int i=0;
    for(j,0,m){
    	while(i<n&&b[j]>a[i]){
    		i++;
		}cout<<i<<" ";
	}
    
}


