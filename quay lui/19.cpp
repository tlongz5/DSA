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

int a[101],ok,n;
vector<string> v;

void Try(string s,int sum,int i){
	forsum(j,i,n){
		int check=sum+a[j];
		string t=s+to_string(a[j])+" ";
		if(check%2) v.push_back(t);
		Try(t,sum+a[j],j+1);
	}
}

AhLong{
	cin>>n;
	forsum(i,0,n) cin>>a[i];
	Try("",0,0);
	sort(v.begin(),v.end());
	for(auto x:v){
		cout<<x<<endl;
	}
}
