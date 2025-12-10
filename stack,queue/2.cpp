#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>

using namespace std;

int main(){
	queue<int> q;
	int n;cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(s=="PUSH"){
			int a;cin>>a;
			q.push(a);	
		}
		else if(s=="POP"){
			if(q.size()) q.pop();
		}
		else {
			if(q.size()) cout<<q.front()<<endl;
			else cout<<"NONE"<<endl;
		}
	}
}
