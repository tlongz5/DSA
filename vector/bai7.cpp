#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <algorithm>
#include <utility>
#define ll long long
using namespace std;

int main(){
	vector< pair<int,int> > v;
	vector<int> m;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		m.push_back(x);
	}
	for(int i=0;i<n;i++){
		bool real=false;
		for(pair<int,int> &z:v){
			if(z.first==m[i]){
				real=true;
				z.second++;
				break;
			}}
			if(!real){
				v.push_back({m[i],1});
			}
		
	}
	for(auto x:v){
		cout<<x.first<<" "<<x.second;
	}
}

