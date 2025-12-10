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
    map<int,set<int>> ma;
    int n,k;cin>>n>>k;
    for(i,0,n){
    	int x;cin>>x;
    	ma[x].insert(i);
	}
	for(i,1,10e6){
		if(ma[i].size()>1){
			auto j=++ma[i].begin();
			if(*j-*ma[i].begin()<=k) cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
}


