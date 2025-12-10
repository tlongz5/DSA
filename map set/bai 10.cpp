#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;

int main(){
	vector<int> venture;
	set<int> maohiem;
	int n;
	vector<int>v;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		venture.push_back(x);
	}
	int q;cin>>q;
	for(int i=n-1;i>=0;i--){
		maohiem.insert(venture[i]);
		v.push_back(maohiem.size());
	}
	for(int i=0;i<q;i++){
		int a;cin>>a;
		cout<<v[v.size()-1-a]<<endl;
	}
}
