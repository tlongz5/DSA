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
	set<pair<int,int>> se;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int a,b;cin>>a>>b;
		se.insert({a,b});
	}
	int dem=0;
	for(int i=0;i<se.size();i++){
		dem++;
	}
	cout<<dem;
}

