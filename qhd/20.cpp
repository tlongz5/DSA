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

int a[MAX][MAX];
int res[MAX][MAX];
int main(){
	int n,m;cin>>n>>m;
	
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}

	int cnt=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]) res[i][j]=min({res[i-1][j],res[i][j-1],res[i-1][j-1]})+1;
			else res[i][j]=0;
			cnt=max(cnt,res[i][j]);
		}
	}
	cout<<cnt;
	
}

