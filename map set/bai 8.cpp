#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;

int main(){
	set<int> a;
	set<int> b;
	set<int> c;
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		a.insert(x);
	}
	for(int i=0;i<m;i++){
		int x;cin>>x;
		b.insert(x);
	}
	for(auto it=a.begin();it!=a.end();it++){
		if(b.find(*it)==b.end()){
			c.insert(*it);
		}
	}
	for(auto it=b.begin();it!=b.end();it++){
		if(a.find(*it)==a.end()){
			c.insert(*it);
		}
	}
	for(auto it=c.begin();it!=c.end();it++){
		cout<<*it<<" ";
	}
}
