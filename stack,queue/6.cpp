#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>

using namespace std;

bool check(string s,string t){
	if(s.size() == t.size()) return s+t>t+s;
	return s.size()>t.size();
}

int main(){
	queue <string> q;
	vector<string> v;
	
	q.push("1");
	
	while(1){
		string ans = q.front();
		q.pop();
		v.push_back(ans);
		if(v.size()>100000) break;
		q.push(ans+"0");
		q.push(ans+"1");
	}
	
	int n;cin>>n;
	while(n--){
		string m;cin>>m;
		int cnt=0;
		for(auto x:v){
			if(!check(x,m)) {
				cnt++;
			}
			else break;
		}cout<<cnt<<endl;
	}
}
