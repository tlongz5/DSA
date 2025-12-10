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
const int MOD =1e9+7;
ll no(string s){
	ll sum=0;
	forsum(i,0,s.size()){
		sum=sum*10+s[i]-'0';
		sum%=MOD;
	}
	return sum;
}

ll binpow(ll n,ll m){
	if(m==0) return 1;
	ll X=binpow(n,m/2)%MOD;
	X=(X*X)%MOD;
	if(m%2) X=(X*n)%MOD;
	return X;
}

ll power(ll a, ll b) {
    ll result = 1;
    while (b > 0) {
        if (b % 2 == 1) {          
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;        
        b /= 2;                     
    }
    return result;
}


AhLong{
	string s;cin>>s;
	ll m ;cin>>m;
	ll n=no(s);
	cout<<binpow(n,m);
}




