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
	sort(v.begin(),v.end());
	for(int y:v) cout<<y<<" ";
	sort(v.begin(),v.end(),greater<int>());
	for(int y:v) cout<<y<<" ";
}
