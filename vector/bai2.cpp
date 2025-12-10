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
		int x;cin>>x;
		v.push_back(x);
	}
	int m;cin>>m;
	for(int i=0;i<m;i++){
		int k;cin>>k;
		if(k==1){
			int q;cin>>q;
			int in;cin>>in;
			v.insert(v.begin()+q,in);
		}
		else{
			int w;cin>>w;
			v.erase(v.begin()+w);
		}
	}
	if(v.size()){
		for(int x:v){
			cout<<x<<" ";
		}
	}
	else cout<<"empty";
}
