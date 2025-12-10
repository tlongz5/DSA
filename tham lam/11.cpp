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

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)

const int mod=1e9+7;

 
int main(){
	int n;cin>>n;
	while(n--){
		priority_queue<int> q;
		int k;cin>>k;
		string s;cin>>s;
		sort(s.begin(),s.end());
		int cnt=1;
		forsum(i,1,s.size()){
			if(s[i]!=s[i-1]){
				q.push(cnt);
				cnt=0;
			}cnt++;
		}q.push(cnt);
		
		while(k--){
			int tmp=q.top();
			q.pop();
			tmp--;
			if(tmp) q.push(tmp);
		}
		
		ll sum=0;
		
		while(q.size()){
			int tmp=q.top();
			q.pop();
			sum+=pow(tmp,2);
		}
		cout<<sum<<endl;
	}
	
}
