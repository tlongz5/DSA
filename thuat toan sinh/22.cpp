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

string s;
int ok=1;

void sinh(){
	int i=s.size()-1;
	while(i>=0 && s[i]=='8') {
		s[i]='6';
		--i;
	}
	if(i<0) ok=0;
	else {
		s[i]='8';
	}
	
}



AhLong{
	int n;cin>>n;
	vector<string> v;
	for(int i=1;;i++){
		s=string(i,'6');
		ok=1;
		while(ok){
		string t=s;
		reverse(t.begin(),t.end());
		v.push_back(s+t);
		if(v.size()==n) {
			for(auto x:v) cout<<x<<" ";
		}
		sinh();
		}
	}
	
}



