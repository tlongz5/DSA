#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <utility>
#include <cmath>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)

const int mod=1e9+7;

 
int main(){
	string s;cin>>s;
	map<char,int> ma;
	int cnt=0;
	for(char &x:s){
		ma[x]++;
		cnt=max(cnt,ma[x]);
	}
	if(cnt-1<=s.size()-cnt) cout<<"YEs";
	else cout<<"NO";
}
