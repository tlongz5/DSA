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

string s;
int ok;

void ktao(){
	ok=1;
	cin>>s;
}

void sinh(){
	int i=s.size()-2;
	while(i>=0 && s[i]>s[i+1]) --i;
	
	if(i<0) ok=0;
	else {
		int j=s.size()-1;
		while(s[j]<s[i]) --j;
		swap(s[j],s[i]);
		reverse(s.begin()+i+1,s.end());
	}
}

AhLong{
	ktao();
	sort(s.begin(),s.end());
	while(ok){
		forsum(i,0,s.size()) cout<<s[i];
		cout<<endl;
		sinh();
	}
}




