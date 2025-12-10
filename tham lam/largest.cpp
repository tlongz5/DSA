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

struct custom{
	int id,time,pre;
};

bool cmp(custom a,custom b){
	return a.pre+a.time<b.pre+b.time;
}

int main(){
	int n;cin>>n;
	custom a[n];
	forsum(i,0,n){
		a[i].id=i+1;
		cin>>a[i].pre>>a[i].time;
	}
	
	stable_sort(a,a+n,cmp);
	
	forsum(i,0,n) cout<<a[i].id<<" ";
	
}


