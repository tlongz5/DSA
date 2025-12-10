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
		int m;cin>>m;s
		if(m==1){
			cout<<q.size()<<endl;
		}
		else if(m==2){
			if(q.empty()) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else if(m==3){
			int a;cin>>a;
			q.push(a);
		}
		else if(m==4){
			if(q.size()) q.pop();
		}
		else if(m==5){
			if(!q.size()) cout<< "-1" << endl;
			else cout<<q.front()<<endl;
		}
		else{
			if(!q.size()) cout<<"-1"<< endl;
			else cout<<q.back()<<endl;
		}
	}
}
