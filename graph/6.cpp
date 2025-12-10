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

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
#define MAX 505

const int mod=1e9+7;

int a[100][100];

int main(){
	vector<pair<int,int>> v;
	map<int,vector<int>> mp;
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) {
			cin>>a[i][j];
			if(a[i][j]) {
				v.push_back({i,j});
				mp[i].push_back(j);
			}
		}
		
	}
	
	for(auto &x:v){
		cout<<x.first<<" "<<x.second<<endl;
	}cout<<endl;
	
	for(auto &x:mp){
		cout<<x.first<<" :";
		for(auto &y:x.second){
			cout<<" "<<y;
		}cout<<endl;
	}
}

