#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;

int main(){
	map<char,int> ma;
	multiset <char> n;
	int be=10e6;
	int lon=0;
	char x;
	while(cin >> x){
		n.insert(x);
		if(ma.find(n)==ma.end()){
			ma[n]=1;
		}
		else ma[n]++;
	}
	for(auto it=ma.begin();it!=ma.end();it++){
		lon=max(lon,it->second);
		be=min(be,it->second);
	}
	int dem1=0,dem2=0;
	cout<<lon<<endl<<be<<endl;
	cout<<ma.size();
}
