#include <bits/stdc++.h>

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
#define MAX 505

const int mod=1e9+7;
using namespace std;

vector<int> v[100];
int check[1000];

bool BruteForce(int u){
	check[u]=1;
	for(auto &x: v[u]){
		if(!check[u]){
			check[u]=1;
		}
		else if()
	}
	check[u]=2;
	return false;
}

int main(){
	int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;cin>>x>>y;
		v[x].push_back(y);
	}
	
	
}
