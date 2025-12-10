#include <iostream>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i++)

int b[101],ok,n,k;
char a[101];
vector<vector<char>> v(10);
string s;

void Try(string t,int i){
		if(i==s.size()){
			cout<<t<<" ";
			return ;
		}
		int n=s[i]-'0';
		for(auto x : v[n]){
			Try(t+x,i+1);
		}
}

AhLong{
	char c='a';
	
	forsum(i,2,10){
		vector<char> vec;
		int cnt;
		if(i==9||i==7) cnt=4;
		else cnt=3;
		
		forsum(j,0,cnt){
			vec.push_back(c++);
		}
		v[i]=vec;
	}
	
	cin>>s;
	Try("",0);
	
}
