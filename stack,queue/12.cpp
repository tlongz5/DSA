#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>
#include <cstring>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)

 
int main(){
	int n;cin>>n;
	while(n--){
		int k;cin>>k;
		string s;cin>>s;
		int a[30];
		memset(a,0,sizeof(a));
		
		forsum(i,0,s.size()){
			a[s[i]-'A']++;
		}
		
		priority_queue<int> q;
		forsum(i,0,30){
			if(a[i]) q.push(a[i]);
		}
		while(k>0 && !q.empty()){
			--k;
			int top=q.top();
			q.pop();
			top--;
			if(top) q.push(top);
		}
		
		ll cnt=0;
		while(!q.empty()){
			ll res = 1ll * q.top() * q.top();
			cnt+=res;
			q.pop();
		}cout<<cnt<<endl;
		
	}
}
