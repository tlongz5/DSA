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


int ok=1;
char c;
int n;

void sinh(string &s){
	int i=n-1;
	while(i>=0 && s[i]==c) --i;
	
	if(i<0) ok=0;
	else {
		s[i]++;
		forsum(j,i+1,n) s[j]='A';
	}
	
}



AhLong{
	cin>>c;
	cin>>n;
	vector<string> v;
	string s=string(n,'A');
	
	while(ok){
		cout<<s<<endl;
		sinh(s);
	}
}



