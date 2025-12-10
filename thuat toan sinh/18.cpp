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
vector<string> v;

void sinh(string &s){
	int i=s.size()-1;
	while(i>=0 && s[i]=='8') {
		s[i]='0';
		--i;
	}
	if(i<0) ok=0;
	else {
		s[i]='8';
	}
	
}

AhLong{
	int n;cin>>n;
	string s="0000000000000000000";
	while(ok){
		sinh(s);
		v.push_back(s);
	}
	ll a[301];
	forsum(i,1,301) {
		forsum(j,0,v.size()){
			ll res=stoll(v[j]);
			if(res%i==0) {
				a[i]=res;
				break;
			}
		}
	}
	while(n--){
		int x;cin>>x;
		cout<<a[x]<<endl;
	}
}




