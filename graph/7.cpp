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
	for(int k=0;k<m;k++){
		int x,y;cin>>x>>y;
		a[x][y]=a[y][x]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cout<<a[i][j]<<" ";
		cout<<endl;
	}
}

