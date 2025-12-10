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
AhLong{
	string s;cin>>s;
	string t="",res="";
	t+=s[0];res+=s[0];
	int cnt=1;
	int dem=0;
	forsum(i,1,s.size()){
		if(s[i]==s[i-1]){
			if(dem<cnt){
				dem=cnt;
				t=res;
			}
			else if(dem==cnt){
				t=max(t,res);
			}
			res="";
			cnt=0;
		}
		++cnt;
		res+=s[i];
	}
			if(dem<cnt){
				t=res;
			}
			else if(dem==cnt){
				t=max(t,res);
			}
	cout<<t;
}




