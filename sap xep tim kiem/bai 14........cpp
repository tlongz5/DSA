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
//#define FOR_each(i,a) for(auto i=a.begin();i!=a.end();++i)
#define C1(x) cin>>x
#define C2(x,y) cin>>x>>y

typedef long long ll;
using namespace std;

AhLong{
    int n;cin>>n;
    map<int,int> ma;
    for(int i=0;i<n;i++){
    	int x,y;cin>>x>>y;
    	ma.insert({x,1});
    	ma.insert({y,-1});
	}
	int dem=0;
	int cnt=0;
	for(auto& i:ma){
		dem+=i.second;
		cnt=max(dem,cnt);
	}
	cout<<cnt;
	
    
}


