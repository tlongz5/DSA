#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>

typedef long long ll;
using namespace std;

int main(){
	map<int,int> ma;
	int n,k;cin>>n>>k;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		if(ma.find(x)==ma.end()) ma[x]=1;
		else ma[x]++;
	}
	int dem=0;
	for(auto i=ma.begin();i!=ma.end();i++){
		if(ma.find(i->first+k)!=ma.end()) dem+=i->second*ma[i->first+k];
	}
	cout<<dem;
}

