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
bool check(string s){
	if(isupper(s[0])) return 1;
	else return 0;
}
AhLong{
	string s;int dem=0;
	while(cin>>s){
		if(check(s)) dem++;
	}
	cout<<dem;
}



