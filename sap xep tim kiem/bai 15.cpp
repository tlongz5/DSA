#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>

#define AhLong int main()
//#define for(i,a,b) for(int i=a;i<b;i++)

typedef long long ll;
using namespace std;

AhLong{
    int n;cin>>n;
    multimap<int,int> ma;
    for(int i=0;i<n;i++){
    	int x,y;cin>>x>>y;
    	ma.insert({y,x});
	}
	int dem=1;
	int cnt=0;
	auto j=ma.begin()->first;
	for (auto i=++ma.begin();i!=ma.end();i++){
		if(j<=i->second){
			dem++;
			j=i->first;
		}
	}
	cnt=max(cnt,dem);
	cout<<cnt;

}


