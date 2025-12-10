#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <unordered_set>
typedef long long ll;

using namespace std;
int main(){
	map<int,vector<int> > ma;
	map<int,vector<int> > m;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		int y=x;
		int dem1=0,dem2=0;
		while(y){
			if(y%2==0){
				dem1++;
			}
			else dem2++;
			y/=10;
		}
		ma[dem1].push_back(x);
		m[dem2].push_back(x);
	}
	for(auto &it:ma){
		sort(it.second.begin(),it.second.end());
	}
	for(auto i=ma.begin();i!=ma.end();i++){
		for(auto it=i->second.begin();it!=i->second.end();it++){
			cout<<*it<<" ";
		}
	}
	cout<<endl;
	for(auto i=m.begin();i!=m.end();i++){
		for(auto it=i->second.begin();it!=i->second.end();it++){
			cout<<*it<<" ";
		}
	}
	
}
