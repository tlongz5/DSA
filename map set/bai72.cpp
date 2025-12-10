#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
		cin>>a[i][j];
	}
	map<int,int> ma;
	for(int i=0;i<n;i++){
		ma[a[0][i]]=1;
	}
	bool dung=0;
	for(int i=1;i<n;i++){
		set<int> se;
		for(int j=0;j<n;j++){
			if(se.find(a[i][j])==se.end()){
				if(ma.find(a[i][j])!=ma.end()) {
				ma[a[i][j]]++;
			}
			se.insert(a[i][j]);
			dung=1;	
			}
			
		}
	}
	for(auto i:ma){
		if(i.second==n)
		 cout<<i.first<<" ";
	}
	if(dung==0) cout<<"NOT FOUND"; 
}
