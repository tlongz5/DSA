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
    string s;cin>>s;
    int l=0;
    set<int> se;
    int dem=0;
    for(i,0,s.size()){
    	if(se.find(s[i])==se.end()){
    		se.insert(s[i]);
		}
		else {
			dem=fmax(dem,se.size());
			while(se.find(s[l])==se.end()){
				se.erase(s[l]);
				l++;
			}l++;
		}
	}dem=fmax(dem,se.size());
	cout<<dem;
}

//c2 
//string s ; cin >> s;
//    map<char,int>mp;
//    int l = 0 , ans = 0 , cnt =0;
//    for(int i = 0 ; i < s.size() ; i++)
//    {
//        mp[s[i]]++;
//        while(mp[s[i]] > 1)
//        {
//            mp[s[l]]--;
//            ++l;
//        }
//        ans = max(ans , i - l + 1);
//    }
//    cout <<ans;
//	return 0;

