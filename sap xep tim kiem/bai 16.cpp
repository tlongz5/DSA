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
    int n;cin>>n;
    vector<int> a(n);
    for(i,0,n) cin>>a[i];
    set<int> se;
    int dem=0;
    for(i,0,n) {
    	auto upper=se.upper_bound(a[i]);
    	 if (upper == se.begin() || *(--upper) + 1 != a[i])  {
    		se.insert(a[i]);
    		dem++;
    		cout<<*upper<<" "<<a[i]<<endl;
		}
		}
	
	cout<<dem;
}



