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

int tong(int sum){
	int cnt=0;
	while(sum){
		cnt+=sum%10;
		sum/=10;
	}return cnt;
}

bool check(string s){
	int sum=0;
	forsum(i,0,s.size()) sum+=s[i]-'0';
	while(sum>10){
		sum=tong(sum);
	}
	if(sum==9) return 1;
	else return 0;
}
AhLong{
	string s;cin>>s;
	if(check(s)) cout<<"YES";
	else cout<<"NO";
	
}




