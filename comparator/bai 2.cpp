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
	map<int,multiset<int> > ma;
	map<int,vector<int> > m;
	int x,y;
	cin>>x>>y;
	for(int i=0;i<x;i++){
		int n;cin>>n;
		ma[abs(n-y)].insert(n);
		if(n%2) m[1].push_back(n);
		else m[0].push_back(n);
	}
	sort(m[0].begin(),m[0].end());
	sort(m[1].begin(),m[1].end(),greater<int>());
	for(auto i=ma.begin();i!=ma.end();i++){
		for(auto it=i->second.begin();it!=i->second.end();it++){
			cout<<*it<<" ";
		}
	}cout<<endl;
	for(auto i=m.begin();i!=m.end();i++){
		for(auto it=i->second.begin();it!=i->second.end();it++){
			cout<<*it<<" ";
		}
	}
}
