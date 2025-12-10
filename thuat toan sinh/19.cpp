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
int ok=1;
bool rever(string s){
	string t= s;
	reverse(s.begin(),s.end());
	return t==s;
}

void sinh(string &s){
	int i=s.size()-1;
	while(i>=0 && s[i]=='1') {
		s[i]='0';
		--i;
	}
	if(i<0) ok=0;
	else {
		s[i]='1';
	}
	
}

AhLong{
	int n;cin>>n;
	string s="";
	forsum(i,0,n) s+='0';
	while(ok){
		if(rever(s)) cout<<s<<endl;
		sinh(s);
	}
	
}




