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

bool check(string s)
{
	reverse(s.begin(),s.end());
	int sum=0;
	if(s[0]=='1') sum+=1;
	forsum(i,1,s.size()){
		if(s[i]=='1'){
			if(i%4==1) sum+=2;
		else if(i%4==2) sum+=4;
		else if(i%4==3) sum+=8;
		else if(i%4==0) sum+=6;
		}
	}
	return !(sum%5);
}

AhLong{
	string s;cin>>s;
	if(check(s)) cout<<"YES";
	else cout<<"NO";
}





