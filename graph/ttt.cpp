#include <bits/stdc++.h>
using namespace std;
static bool tmp1(pair<string,int> a,pair<string,int> b){
	if(a.second!=b.second) return a.second<b.second;
	else return a.first<b.first;
}

static bool tmp2(pair<string,int> a,pair<string,int> b){
	if(a.second!=b.second) return a.second<b.second;
	else return a.first>b.first;
}

int main(){
	vector<pair<string,int>> v;
	map<string,int> ma;
	string s;
	
	getline(cin,s);
	stringstream ss(s);
	string word;
	
	while(ss>>word){
		ma[word]++;
	}
	
	for(auto &x:ma){
		v.push_back(x);
	}
	int n=v.size();
	sort(v.begin(),v.end(),tmp1);
	cout<<v[n-1].first<<" "<<v[n-1].second<<endl;
	
	sort(v.begin(),v.end(),tmp2);
	cout<<v[0].first<<" "<<v[0].second<<endl;
	
	
}
