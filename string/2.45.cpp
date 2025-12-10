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
int check(string s)
{
    if(s.size()==1) return (s[0]-'0')%4;
    int sum=0;
    sum+=(s[s.size()-1]-'0')+(s[s.size()-2]-'0')*10;
    return sum%4;
}


AhLong{
    string s;cin>>s;
    if(s.size()==1&&s[0]=='0') {
    	cout<<1;
    	return 0;
	}
    if(check(s)==1) cout<<8;
    else if(check(s)==2) cout<<4;
    else if(check(s)==3) cout<<2;
    else cout<<6;
}




