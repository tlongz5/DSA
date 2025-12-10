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
// ham substr

AhLong{
	string s;cin>>s;
	string t="111";
	while(s.find(t)!=string::npos){
		s.erase(s.find(t),3);
	}
	if(s.size()==0) cout<<"EMPTY";
	else cout<<s;
}




