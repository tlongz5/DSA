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
	vector<int> a;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	int maxi=2*10e9;
	for(int i=1;i<n;i++){
		maxi=min(maxi,a[i]-a[i-1]);
	}
	int dem=0;
	for(int i=1;i<n;i++){
		if(a[i]-a[i-1]==maxi) dem++;
	}
	cout<<dem<<" "<<maxi;
}

