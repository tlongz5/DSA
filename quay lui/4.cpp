#include <iostream>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i++)

int n,a[100],b[100],ok,k;
vector<vector<int>> v;

void inkq(){
	vector<int> ve;
	int sum=0;
	forsum(i,0,n) {
		if(b[i]){
			sum+=a[i];
			ve.push_back(a[i]);
		}
	}
	if(sum==k) v.push_back(ve);
}

void backtrack(int i){
	forsum(j,0,2){
		b[i]=j;
		if(i==n-1) inkq();
		else backtrack(i+1); 
	}
		
}

int main(){
	cin>>n>>k;
	forsum(i,0,n){
		cin>>a[i];
	}sort(a,a+n);
	
	backtrack(0);
	sort(v.begin(),v.end());
	
	for(auto x:v) {
		for(auto m:x){
			cout<<m<<" ";
		}cout<<endl;
	}
}
