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

bool rever(string s){
	string t= s;
	reverse(s.begin(),s.end());
	return t==s;
}

bool check(string s){
	forsum(i,0,s.size()) if(s[i]=='0') return 1;
	return 0;
}


void sinh(string &s,int &ok){
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

//c1

//AhLong{
//	int n;cin>>n;
//	vector<string> v1;
//	vector<string> v2;
//	for(int i=2;i<=n;i+=2){
//		string s="";
//		int ok=1;
//		forsum(j,0,i) s+='0';
//		while(ok){
//		if(rever(s)){
//			if(check(s)) v1.push_back(s);
//			else v2.push_back(s);
//			}
//			sinh(s,ok);
//		}
//	}
//	
//	forsum(i,0,v1.size()) cout<<v1[i]<<endl;
//	forsum(i,0,v2.size()) cout<<v2[i]<<endl;
//	
//}

//c2
AhLong{
	vector<string> v;
	int n;cin>>n;
	for(int i=1;i<=n/2;i++){
		int ok=1;
		string s=string(i,'0');
		while(ok){
			string t=s;
			reverse(t.begin(),t.end());
			v.push_back(s+t);
			sinh(s,ok);
		}
	}
	sort(v.begin(),v.end());
	forsum(i,0,v.size()) cout<<v[i]<<endl;
	
}





