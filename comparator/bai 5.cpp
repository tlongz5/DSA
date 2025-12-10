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

bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.second==b.second){
		return a.first>b.first;
	}
	else return a.second<b.second;
}
int main(){
	int n;cin>>n;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		v.push_back({a,b});
	}
	sort(v.begin(),v.end(),cmp);
	for(auto i=v.begin();i!=v.end();i++){
		cout<<i->first<<" "<<i->second<<endl;
	}
}

