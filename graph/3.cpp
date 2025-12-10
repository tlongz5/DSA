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
	int n,m;cin>>n>>m;
	vector<int> v[n+1];
	for(int i=1;i<=m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
	}
	for(int i=1;i<=n;i++){
		sort(v[i].begin(),v[i].end());
		cout<<i<<" :";
		for(auto &x:v[i]){
			cout<<" "<<x;
		}cout<<endl;
	}
}

