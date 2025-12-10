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

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
typedef long long ll;
bool comp(string s1,string s2){
	return s1.length()<s2.length();
}
AhLong{
	vector<string> s;
	string a;
	while(cin>>a){
		s.push_back(a);
	}
	sort(s.begin(),s.end(),comp);
	for(auto i=s.begin();i!=s.end();i++){
		cout<<*i<<" ";
	}
}



