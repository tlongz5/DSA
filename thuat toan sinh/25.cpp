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

int n;
int ok;

void sinh1(string &s1){
	int i=n-2;
	while(i>=0 && s1[i]>s1[i+1]) --i;
	
	if(i<0) ok=0;
	else {
		int j=n-1;
		while(s1[j]<s1[i]) --j;
		swap(s1[i],s1[j]);
		reverse(s1.begin()+i+1,s1.end());
	}
	
}

void sinh2(string &s2){
	int i=n-1;
	while(i>=0 && s2[i]=='0'+n) --i;
	
	if(i<0) ok=0;
	else {
		s2[i]++;
		forsum(j,i+1,n) s2[j]='1';
	}
	
}



AhLong{
	cin>>n;
	vector<string> v1;
	vector<string> v2;
	
	string s1="";
	char c='A';
	forsum(i,0,n) {
		s1+=c;
		c++;
	}
	
	string s2=string(n,'1');
	
	ok=1;
	while(ok){
		
		v1.push_back(s1);
		sinh1(s1);
	}
	
	ok=1;
	while(ok){
		v2.push_back(s2);
		sinh2(s2);
	}
	
	for(auto x:v1){
		for(auto y:v2){
			cout<<x<<y<<endl;
		}
	}
}

