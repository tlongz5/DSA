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
	vector<vector<int>> vi;
	int n,m;cin>>n>>m;
//	vi.resize(n);
//	for(int i=0;i<n;i++){
//		int x;cin>>x;
//		for(int j=0;j<x;j++){
//			int a;cin>>a;
//			vi[i].push_back(a);
//		}
//	}
	
	//c2
	
	for(int i=0;i<n;i++){
	
		int x;cin>>x;
		vector<int> r(x);
		for(int j=0;j<x;j++){
			cin>>r[j];
		}
		vi.push_back(r);
	}
	
	for(int i=0;i<m;i++){
		int c,k;cin>>c>>k;
		c--;k--;
		cout<<vi[c][k]<<endl;
	}
	
}

