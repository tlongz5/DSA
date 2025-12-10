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
using namespace std;

AhLong{
    string s;
    cin>>s;
    map<char,int> ma;
    set<int> se;
    for(i,0,s.size()){
    	se.insert(s[i]);
	}
	int l=0,r=0,dem= s.size(),mini=0;;
	while(r<s.size()){
		ma[s[r]]++;
		
		while(ma.size()==se.size()){
			if(ma[s[l]]>1) ma[s[l]]--;
			else ma.erase(s[l]);
			mini=r-l+1;
			if(mini<dem) dem=mini;	
			l++;
		}
		
		r++;
	}
	cout<<dem;
    	
}

