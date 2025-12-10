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
bool check(string s,string t){
	if(s.size()!=t.size()) return s.size()<t.size();
	return s<t;
}

AhLong{
	int n;cin>>n;
	while(n--){
		string s,t;cin>>s>>t;
		if(!check(s,t)) {
			string k=s;
			s=t;
			t=k;
		}
		string sum="";
		reverse(s.begin(),s.end());
		reverse(t.begin(),t.end());
		int dem=0;
		int c;
		char d;
		forsum(i,0,t.size()){
			if(i>=s.size()) s[i]='0';
			c=t[i]-s[i]-dem;
			if(c<0) {
				d=10+c+'0';
				dem=1;
			}
			else{
				d=c+'0';
				dem=0;
			}
			sum+=d;
		}
		reverse(sum.begin(),sum.end());
		cout<<sum<<endl;
	}
	
	
}




