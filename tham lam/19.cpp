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
	int cnt,cnt1,cnt2;
	cnt=cnt1=cnt2=0;
	forsum(i,0,s.size()){
		if(s[i]=='(') cnt1++;
		else {
			cnt2++;
			if(cnt2>cnt1) ++cnt;
		}
		 
	}
	
	cout<<cnt;
}


