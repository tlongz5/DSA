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
	
	vector<double> v;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		
		int a,b;cin>>a>>b;
		pair<int,int> p=make_pair(a,b);
		double distance=  sqrt(p.first*p.first+p.second*p.second);
		v.push_back(distance);
	}
	for(int i=0;i<n;i++){
		cout<<v[i]<<" ";
	}
}
