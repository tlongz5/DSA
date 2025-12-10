#include <bits/stdc++.h>

#define AhLong int main()
#define for(i,a,b) for(int i=a;i<b;i++)

typedef long long ll;
using namespace std;

AhLong{
    int n,m;cin>>n>>m;
    multiset<int> a;
    vector<int> b(m);
    for(i,0,n) {
    	int x;cin>>x;
    	a.insert(x);
	}
    for(i,0,m) cin>>b[i];
    for(i,0,m){
    	auto upper=upper_bound(a.begin(),a.end(),b[i]);
    	if(upper==a.begin()) cout<<-1<<endl;
    	else {
    		auto j=upper;
    		--j;
    		cout<<*j<<endl;
    		a.erase(*j);
		}
	}
}


