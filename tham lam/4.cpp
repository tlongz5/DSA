#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>
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
	int n,k;cin>>n>>k;
	int a[n];
	for(int &x:a) cin>>x;
	sort(a,a+n);
	
	ll sum=0;
	forsum(i,0,n){
		if(i<min(k,n-k)) sum-=a[i];
		else sum+=a[i];
	}
	cout<<sum;
}
