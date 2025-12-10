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
	int n;cin>>n;
	vector<pair<int,int>> v;
	cin.ignore();
	for(int i=1;i<=n;i++){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string word;
		while(ss>>word){
			if(stoi(word)>i) v.push_back({i,stoi(word)});
		}
	}
	
	for(auto &x:v){
		cout<<x.first<<" "<<x.second<<endl;
	}
}

