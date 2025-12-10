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
		b[i]=a[i];
		if(i) b[i]+=b[i-1];
		
	}
	for(int i=0;i<q;i++){
		int g,h;cin>>g>>h;
		cout<<b[h]-(g>0? b[g-1]:0)<<endl;
	}
}

