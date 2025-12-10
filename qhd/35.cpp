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

int a[MAX];
int f[10001];
int main(){
	
	int n;cin>>n;
	
	int t=0;
	map<int,int> mp;
	mp[0]=1;
	
	int cnt=0;
	forsum(i,1,n+1) {
		cin>>a[i];
		if(a[i]%2) t++;
		else t--;
		f[i]=t;
		cnt+=mp[f[i]];
		mp[f[i]]++;
	}
	
	cout<<cnt;
	
	
	
}

