#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <utility>
#include <cmath>
#include <sstream>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
#define MAX 505

const int mod=1e9+7;



int main(){
	int n;cin>>n;
	int a[n][n];
	vector<pair<int,int>> v;
	vector<int> vo[n+1];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) {
			cin>>a[i][j];
			if(i>j) v.push_back({i+1,j+1}); 
			if(a[i][j])vo[i+1].push_back(j+1);
		}
	}
	
	for(auto &x:v) cout<<x.first<<" "<<x.second<<endl;
	cout<<endl;
	for(int i=1;i<=n;i++){
		cout<<i<<" :";
		for(auto &x:vo[i]) cout<<" "<<x;
		cout<<endl;
	}
	
}

