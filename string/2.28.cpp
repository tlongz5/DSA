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
bool check(string s,int k)
{
	reverse(s.begin(),s.end());
	forsum(i,0,k){
		if(s[i]=='1') {
			return 0;
		}
	}
	return 1;
}




AhLong{
	string s;int k;cin>>s>>k;
	if(check(s,k)) cout<<"YES";
	else cout<<"NO";
}




