#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>

using namespace std;

int main(){
	deque<int> q;
	int n;cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(s=="PUSHBACK"){
			int a;cin>>a;
			q.push_back(a);	
		}
		else if(s=="POPBACK"){
			if(q.size()) q.pop_back();
		}
		else if(s=="PRINTFRONT"){
			if(q.size()) cout<<q.front()<<endl;
			else cout<<"NONE"<<endl;
		}
		else if(s=="PUSHFRONT"){
			int a;cin>>a;
			q.push_front(a);
		}
		else if(s=="POPFRONT"){
			q.pop_front();
		}
		else { // print back
			if(q.size()) cout<<q.back()<<endl;
			else cout<<"NONE"<<endl;
		}
	}
}
