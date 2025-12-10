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
string swap(ll n){
	string s="";
	while(n){
		s+=n%10+'0';
		n/=10;
	}
	reverse(s.begin(),s.end());
	return s;
}
AhLong{
	ll n;cin>>n;
	cout<<swap(n);
}
//c2 dung to_string(n)



