#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>

using namespace std;

int main(){
	queue <string> q;
	vector<string> v;
	q.push("1");
	while(1){
		string ans=q.front();
		q.pop();
		v.push_back(ans);
		if(v.size()>100) break;
		q.push(ans+"0");
		q.push(ans+"1");
	}
	
	int n;cin>>n;
	int cnt=0;
	for(auto x:v){
		cnt++;
		cout<<x<<" ";
		if(cnt==n) return 0;
	}
}
