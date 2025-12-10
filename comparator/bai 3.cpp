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
double kcach(pair<int,int> a){
	return sqrt(a.first*a.first+a.second*a.second);
}
bool tmp(pair<int,int> a,pair<int,int> b){
	if(kcach(a)!=kcach(b)){
		if(kcach(a)<kcach(b)) return true;
		else return false;
	}
	else {
		if(a.first==b.first){
			return a.second<b.second;
		}
		else {
			return a.first<b.first;
		}
	}
}

int main(){
	int n;cin>>n;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		v.push_back({a,b});
	}
	sort(v.begin(),v.end(),tmp);
	for(auto i=v.begin();i!=v.end();i++){
		cout<<i->first<<" "<<i->second<<endl;
	}
}
