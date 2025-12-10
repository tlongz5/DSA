#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>

using namespace std;

int main(){
	queue <string> q;
	vector<string> v;
	
	q.push("8");
	
	while(1){
		string ans = q.front();
		q.pop();
		v.push_back(ans);
		if(v.size()>100000) break;
		q.push(ans+"0");
		q.push(ans+"8");
	}
	
	int n;cin>>n;
	while(n--){
		int m;cin>>m;
		for(auto x:v){
			if(stoll(x) % m == 0) {
				cout<<x<<endl;
				break;
			}
		}
	}
}
