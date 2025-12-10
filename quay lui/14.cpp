#include <iostream>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i++)

int a[101],b[101],ok,n,k;
vector<string> v;

void Try(string s,int sum,int i){
	if(sum==k) {
		s.pop_back();
		s+="}";
		v.push_back(s);
		return ;
	};
		forsum(j,i,n){
			if(sum+a[j]<=k){
				Try(s+to_string(a[j])+" ",sum+a[j],j);
			}
		}	
}

AhLong{
	cin>>n>>k;
	forsum(i,0,n) cin>>a[i];
	sort(a,a+n);
	Try("{",0,0);
	
	sort(v.begin(),v.end());
	if(!v.size()){
		cout<<-1<<endl;
	}
	else {
		cout<<v.size()<<endl;
		for(auto x:v){
			cout<<x<<endl;
		}
	}
}
