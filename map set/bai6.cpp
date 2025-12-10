#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	int a[n];
	set<int> b;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		int x;cin>>x;
		b.insert(x);
	}
	for(int i=0;i<n;i++){
		if(b.find(a[i])!=b.end()) {
			cout<<a[i]<<" ";
			b.erase(a[i]);
		}
	}
}
