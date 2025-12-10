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

char c;
int ok=1;

void sinh(string &s){
	int i=s.size()-2;
	while(i>=0 && s[i]>s[i+1]) --i;
	
	if(i<0) ok=0;
	else{
		int j=s.size()-1;
		while(s[j]<s[i]) --j;
		swap(s[i],s[j]);
		reverse(s.begin()+i+1,s.end());
	}
}

bool na(char c){
	return c=='A' || c=='E';
}

bool check(string s){
	
	forsum(i,1,s.size()-1) {
		if(na(s[i]) && !na(s[i+1]) && !na(s[i-1])) return 0;
	}
	return 1;
}

AhLong{
	cin>>c;
	string s="";
	char t= 'A';
	while(t<=c){
		s+=t;
		t++;
	}
	
	while(ok){
		if(check(s)) cout<<s<<endl;
		sinh(s);
	}
}

