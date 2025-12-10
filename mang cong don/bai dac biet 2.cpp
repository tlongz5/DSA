#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <utility>
#include <string>
#include <algorithm>

#define AhLong int main()
#define for(i,a,b) for(int i=a;i<b;i++)

typedef long long ll;
const int MOD=1e9+7;
using namespace std;

AhLong{
    string s1,s2;
    int ans=MOD;
    map<int,int> mp1,mp2;
    cin>>s1>>s2;
    for(i,0,s2.size()){
    	mp1[s2[i]]++;
	}
	int cnt=0;
	int l=0;
	int index=-1;
	for(i,0,s1.size()){
		mp2[s1[i]]++;
		if(mp2[s1[i]]<=mp1[s1[i]]) cnt++;
		while(cnt==s2.size()&&mp2[s1[l]]>mp1[s1[l]]){
			mp2[s1[l]]--;
			l++;
		}	
		if(ans>i-l+1){
		ans=i-l+1;
		index=l;
		}
	}
	if(index==-1) cout<<-1;
	else {
		cout<<s1.substr(index,ans);
	}
	
	
}


