#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	map<int,int> ma;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(ma.find(a[i][j])!=ma.end()&&ma[a[i][j]]==i){
				ma[a[i][j]]++;
			}
			else if(ma.find(a[i][j])==ma.end()){
				ma[a[i][j]]=1;
			}
		}
	}
	for(auto it=ma.begin();it!=ma.end();it++){
		if(it->second==n) cout<<it->first<<" ";
	}
	
}
