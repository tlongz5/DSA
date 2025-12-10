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
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(!i) b[i]=a[i];
		else b[i]=a[i]-a[i-1];
	}
	for(int i=0;i<q;i++){
		int x,y,z;
		cin>>x>>y>>z;
		b[x]+=z;
		if(y<n-1) b[y+1]-=z; 
	}
	int c[n];
	for(int i=0;i<n;i++){
		if(i) b[i]+=b[i-1];
		c[i]=b[i];
	}
	for(int i=0;i<n;i++){
		cout<<c[i]<<" ";
	}
	
}

