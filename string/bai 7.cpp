#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <cctype>

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
typedef long long ll;

AhLong{
	string s;cin>>s;
	forsum(i,0,s.size()) if(isdigit(s[i])) cout<<s[i];
	cout<<endl;
	forsum(i,0,s.size()) if(isalpha(s[i])) cout<<s[i];
}



