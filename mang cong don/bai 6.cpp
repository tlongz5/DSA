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
	int n,q;cin>>n>>q;
	int dem[n];
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		dem[i]=0;
	}

	while(q--){
		int x,y;cin>>x>>y;
		x--;y--;
		 dem[x]++;
		if(y+1<n) dem[y+1]--;
		
	}
	for(int i=1;i<n;i++){
		dem[i]+=dem[i-1];
	}
	
	sort(a,a+n);
	sort(dem,dem+n);
	int tong=0;
	for(int i = 0 ;i < n ; i++)
    {
        tong += 1ll*dem[i] * a[i];
    }
	cout<<tong;
	
}

