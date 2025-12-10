#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <algorithm>
#include <utility>
#define ll long long
using namespace std;

int main(){
	vector<pair<pair<int,int>,int>> v;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		pair<pair<int,int>,int> p;
		cin>>p.first.first>>p.first.second>>p.second;
		v.push_back(p);
	}
	vector<double> sum;
	for(auto x:v){
		double d = sqrt(x.first.first*x.first.first+x.first.second*x.first.second+x.second*x.second);
		sum.push_back(d);
	}
	for(auto x:sum){
		cout<<x<<" ";
	}
	}

