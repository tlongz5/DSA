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
			cout<<*it<<" ";
		}
	}
}
