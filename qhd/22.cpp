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
#define MAX 505

const int mod=1e9+7;

//int a[MAX];
//int res[10001];
//int main(){
//	ll sum=0;
//	string s;cin>>s;
//	forsum(i,0,s.size()){
//		for(int j=0;j<=i;j++){
//			ll cnt=stoll(s.substr(j,i-j+1)); 
//			cout<<cnt<<" ";
//			sum+=cnt;
//		}
//	}
//	
//	cout<<sum;
//}

//c2
int res[100];
int main(){
	string s;cin>>s;
	res[0]=s[0]-'0';
	
	forsum(i,1,s.size()){
		res[i]=res[i-1]*10+(i+1)*(s[i]-'0');
	}
	
	int cnt=0;
	forsum(i,0,s.size()){
		cnt+=res[i];
	}cout<<cnt;
}


