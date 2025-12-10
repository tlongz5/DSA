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
	int n,m;cin>>n>>m;
	vector<int> v[n+1];
	for(int k=0;k<m;k++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		cout<<i<<" :";
		for(auto &x:v[i]){
			cout<<" "<<x;
		}cout<<endl;
	}
}

