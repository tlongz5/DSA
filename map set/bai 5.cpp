#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> a;
	set<int> b;
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		a.push_back(x);
	}
	for(int i=0;i<m;i++){
		int x;cin>>x;
		b.insert(x);
	}
	for(int i=0;i<n;i++){
		if(b.find(a[i])!=b.end()){
			b.erase(a[i]);
			cout<<a[i]<<" ";
		}
	}
}
