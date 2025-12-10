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
int a[200001];
int main(){
	
	int n,k,q;
	cin>>n>>k>>q;
	while(n--){
		int x,y;cin>>x>>y;
		a[x-1]++;
		a[y]--;
	}
	for(int i=1;i<10;i++){
		a[i]+=a[i-1];
	}
	for(int i=0;i<10;i++){
		if(a[i]>=k) a[i]=1;
		else a[i]=0;
		
		if(i) a[i]+=a[i-1];
	}
	while(q--){
		int x,y;cin>>x>>y;
		x--;y--;
		cout<<a[y]-a[x-1];
	}
}

