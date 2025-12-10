#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <unordered_set>
typedef long long ll;

using namespace std;
int a[10e4];
map<int,int> ma;
int ts(int n){
	return ma[n];
}
bool comparator(int a,int b){
	if(ts(a)==ts(b)) return a<b;
	else{
		return ts(a)>ts(b);
	}
}
int main(){
	int n;cin>>n;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		ma[a[i]]++;
	}
	
}
sort(a,a+n,comparator);
