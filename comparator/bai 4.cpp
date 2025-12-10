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
int cnt(int n){
	int dem=0;
	while(n){
		if(n%2) dem++;
		n/=10;
	}
	return dem;
}

bool cmp(int a,int b){
	if(cnt(a)!=cnt(b)){
		return cnt(a)>cnt(b);
	}
	else{
		return a<b;
	}
}

int main(){
	int n;cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end(),cmp);
	for(auto i=v.begin();i!=v.end();i++){
		cout<<*i<<" ";
	}
}
