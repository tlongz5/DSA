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

//AhLong{
//	string s;
//	getline(cin,s);
//	string t="28tech";
//	forsum(i,0,s.length()) s[i]=tolower(s[i]);
//	char str[s.length()+1];
//	strcpy(str,s.c_str());
//	const char* z=" ";
//	char *token=strtok(str,z);
//	int dem=0;
//	while(token!=NULL){
//		if(token==t) dem++;
//		token=strtok(NULL,z);
//	}
//	cout<<dem;
//}
void lower(string &s)
{
	for(char &x : s)
	{
		x = tolower(x);
	}
}
int main()
{
	string s ; int ans = 0;
	while(cin >> s)
	{
		lower(s);
		if(s == "28tech") ++ans;
	}
	cout << ans;
	return 0;
}

