#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>
#include <cstring>
#include <map>
#include <set>
#include <utility>
#include <cmath>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)

void maxi(string &s){
	forsum(i,0,s.size()) if(s[i]=='5') s[i]='6';
}

void mixi(string &s){
	forsum(i,0,s.size()) if(s[i]=='6') s[i]='5';
}
 
int main(){
	string s,t;
	cin>>s>>t;
	maxi(s);maxi(t);
	cout<<stoll(s)+stoll(t)<<endl;
	mixi(s);
	mixi(t);
	cout<<stoll(s)+stoll(t);
}
