#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <utility>
#include <cmath>
#include <sstream>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
#define MAX 505

const int mod=1e9+7;

vector<string> v;
void solve(int n,string s){
	if(s.size()==n) {
		v.push_back(s);
		return ;
	}
	
	s+='0';
	solve(n,s);
	s.pop_back();
	
	if(!s.empty() && s[s.size()-1]=='1') return;
	s+='1';
	solve(n,s);
	s.pop_back();
}

int main(){
	int n;cin>>n;
	solve(n,"");
	cout<<v.size()<<endl;
	for(auto &x:v) cout<<x<<endl;
}

