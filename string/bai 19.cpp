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
void lower(string &s){
	for(char &x:s){
		x=tolower(x);
	}
}
AhLong{
	set<string> s;
	string a;
	while(cin>>a){
		lower(a);
		s.insert(a);
	}
	cout<<s.size();
}



