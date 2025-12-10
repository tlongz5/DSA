#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <math.h>
#include <algorithm>
#define ll long long
using namespace std;

int main(){
	vector<int > v;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		if(a==1){
			int b;cin>>b;
			v.push_back(b);
		}
		else {
			if(v.size()) v.pop_back();
		}
	}
	if(v.size()==0) cout<<"empty";
	else {
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}
	}
}
