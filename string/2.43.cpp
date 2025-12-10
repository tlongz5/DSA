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

int gcd(ll n,ll m){
	if(!n||!m) return n+m;
	return gcd(m,n%m);
}

AhLong{
	string s;cin>>s;
	ll t ;cin>>t;
	ll sum=0;
	forsum(i,0,s.size()){
		sum=sum*10+s[i]-'0';
        sum=sum%t;
	}
	cout<<gcd(sum,t);
}




