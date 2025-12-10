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
	string s,t;cin>>s>>t;
	sort(s.begin(),s.end());
	sort(t.begin(),t.end());
	
	int i=0,j=0;
	int cnt=0;
	while(i<s.size()&&j<s.size()){
		if(s[i]>t[j]) j++;
		else if(s[i]<t[j]) i++;
		else {
			cnt+=(s[i]==t[j]); 
			i++;j++;
		}
	}
	
	cout<<cnt;
}


