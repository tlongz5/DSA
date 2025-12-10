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

const int mod=1e9+7;

bool comp(pair<int,int> a,pair<int,int> b){
	return a.second<b.second;
}

 
int main(){
	int n;cin>>n;
	vector<pair<int,int>> v;
	forsum(i,0,n){
		int a,b;cin>>a>>b;
		v.push_back({a,b});
	}
	sort(v.begin(),v.end(),comp);
	
	int cnt=1;
	int value=v[0].second;
	forsum(i,1,n){
		cout<<v[i].first<<" "<<v[i].second<<endl;
		if(value<v[i].first) {
			++cnt;
			value=v[i].second;
		}
	}
	cout<<cnt;
}
