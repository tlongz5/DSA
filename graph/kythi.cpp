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
#include <sstream>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
#define MAX 505

const int mod=1e9+7;



int main(){
//	freopen("XOACHUSO.INP","r",stdin);
//	freopen("XOACHUSO.OUT","w",stdout);
	string s;getline(cin,s);
	string t="";
	for(int i=0;i<s.size();i++){
		if(isdigit(s[i])) continue;
		t+=s[i];
	}
	cout<<t;
}

