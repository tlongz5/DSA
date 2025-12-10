#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
typedef long long ll;

using namespace std;
int main(){
	map<string,vector<string> > ma;
	int n;cin>>n;
	cin.ignore();
	for(int i=0;i<n;i++){
		string s1;
		string s2;
		getline(cin,s1);
		getline(cin,s2);
		ma[s1].push_back(s2);
		ma[s2].push_back(s1);
	}
	for(auto it:ma){
		sort(it.second.begin(),it.second.end());
	}
	for(auto it:ma){
		cout<<it.first<<" : ";
		for(auto i=it.second.begin();i!=it.second.end();i++){
			cout<<*i;
			if(i!=it.second.end()-1) cout<<", ";
		}cout<<endl;
	}
}
