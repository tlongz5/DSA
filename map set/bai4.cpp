#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <utility>
#define ll long long
using namespace std;
int main(){
	int n,m;cin>>n>>m;
	int a[n],b[m];
	set<int> s;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s.insert(a[i]);
	}
	for(int i=0;i<m;i++){
		cin>>b[i];
		s.insert(b[i]);
	}
	for(set<int>::reverse_iterator it=s.rbegin();it!=s.rend();it++){
//	for(auto it=s.rbegin();it!=s.rend();it++){
		cout<<*it<<" ";
	}
	
}

