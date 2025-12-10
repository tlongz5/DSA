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
    string s1,s2;cin>>s1>>s2;
    multiset<int> se,s;
    map<int,int> ma;
    for(i,0,s2.size()){
    	se.insert(s2[i]);
	}s=se;
	int l=0,left=0,right=0,dem=10e7;
	for(i,0,s1.size()){
		if(se.find(s1[i])!=se.end()) ma[s1[i]]++;
		while(ma.size()==se.size()){
			if(i-l+1<dem) {
				dem=i-l+1;
				left=l;
				right=i;
			}
			if(ma[s1[l]]>1) ma[s1[l]]--;
			else ma.erase(s1[l]);
			l++;
		}
	}
	for(i,left,right+1) cout<<s1[i];
}


