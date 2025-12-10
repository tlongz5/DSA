#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>
#include <cstring>
#include <map>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
bool check(int i){
	map<char,int> ma;
	string s= to_string(i);
	forsum(i,0,s.size()) {
		ma[s[i]]++;
		if(s[i]>'5'|| ma[s[i]]>1) return 0;
	}
	return 1;
}
 
int main(){
	int n;cin>>n;
	while(n--){
		int l,r;cin>>l>>r;
		int cnt=0;
		forsum(i,l,r+1){
			if(check(i)) cnt++;
		}
		cout<<cnt<<endl;
	}
}
