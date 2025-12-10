#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;

int main(){
	map<string,string> ma;
	int n;cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		string name;
		string sbd;
		cin>>sbd;
		cin.ignore();
		getline(cin,name);
		ma[sbd]=name;
	}
	int m;cin>>m;
	for(int i=0;i<m;i++){
		string sbd;
		cin>>sbd;
		if(ma.find(sbd)!=ma.end()){
			cout<<ma[sbd]<<endl;
		}
		else cout<<"NOT FOUND"<<endl;
	}
}
