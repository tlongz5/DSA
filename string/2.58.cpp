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
#include <sstream>

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
typedef long long ll;


AhLong{
	
	string s;
	int n;cin>>n;
	cin.ignore();
	forsum(k,0,n) {
		map<string,int> ma;
		getline(cin,s);
		stringstream ss(s);
		string word;
		forsum(i,0,s.size()){
			if(s[i]=='+') s[i]=' ';
		}
		while(ss>>word){
			forsum(i,0,word.size()){
				if(word[i]=='x'){
					string bien=word.substr(i,word.size());
					int cnt=stoi(word.substr(0,i));
					ma[bien]+=cnt;
				}
			}
		}
		cout<<ma.begin()->second<<ma.begin()->first;
		for(auto x=++ma.begin();x!=ma.end();x++){
			cout<<" + "<<x->second<<x->first;
		}cout<<endl;
	}
}




