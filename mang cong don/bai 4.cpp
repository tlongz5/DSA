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
	int n;cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(!i) b[i]=a[i];
		else b[i]=a[i]-a[i-1];
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
	
}

