#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>

typedef long long ll;
using namespace std;

int main(){
	int n,m;cin>>n>>m;
	int a[n][m],b[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			b[i][j]=a[i][j];
			if(j) b[i][j]+=b[i][j-1];
			else if(j==0&&i) b[i][j]+=b[i-1][m-1];
		}
	}
	int q;cin>>q;
	for(int i=0;i<q;i++){
		int x1,x2,y1,y2;
		cin>>x1>>x2>>y1>>y2;
		--x1;--x2;--y1;--y2;
		if(!x1&&!y1) cout<<b[x2][y2]<<endl;
		else if(y1) cout<< b[x2][y2]-b[x1][y1-1]<<endl;
		else {
			cout<< b[x2][y2]-b[x1-1][m-1]<<endl;
		}
	}
}

