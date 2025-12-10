#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>
#include <sstream>

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
typedef long long ll;
int dem(string s){
	return s.size();
}

bool comp(string s1,string s2){
	if(dem(s1)!=dem(s2)) return dem(s1)<dem(s2);
	else{
		return s1<s2;
	}
}

AhLong{
	vector<string> v;
	string s ;getline(cin,s);
	stringstream ss(s);
	string word;
	while(ss>>word){
		v.push_back(word);
	}
	sort(v.begin(),v.end());
	for(auto it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	sort(v.begin(),v.end(),comp);
	for(auto it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
}




