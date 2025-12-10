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
	map<char,int> ms;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		char x;cin>>x;
		if(ms.find(x)!=ms.end()) ms[x]++;
		else ms[x]=1;
	}
	cout<<ms.begin()->first<<" "<<ms.begin()->second<<endl<<endl;
	cout<<ms.rbegin()->first<<" "<<ms.rbegin()->second<<endl<<endl;
	for(auto x:ms){
		cout<<x.first<<" "<<x.second<<endl;
	}
	cout<<endl;
	for(auto it=ms.rbegin();it!=ms.rend();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
}

