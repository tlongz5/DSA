#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)

using namespace std;
typedef long long ll;

int a[100],n,k,ok,cnt;

void ktao(){
	ok=1;
	int dem=0;
	forsum(i,0,n){
		dem++;
		if(dem<k){
			a[i]=0;
		}
		else a[i]=1;
	} 
}

void sinh(){
	int i=n-1;
	int dem=0;
	while(i>=0 && a[i]){
		dem++;
		a[i]=0;
		--i;
	}
	if(i<0) ok=0;
	else a[i]=1;
}

AhLong{
	cin>>n>>k;
	ktao();
	while(ok){
		cnt=0;
		forsum(i,0,n){
			if(a[i]) cnt++;
		}
		if(cnt==k){
			forsum(i,0,n) cout<<a[i];
			cout<<" ";
		} 
		sinh();
	}
	cout<<endl;
	
	ktao();
	while(ok){
		int dem=0;
		cnt=0;
		forsum(i,0,n){
			if(a[i]) cnt++;
			else {
				dem=max(cnt,dem);
				cnt=0;
			}
		}dem=max(cnt,dem);
		if(dem==k){
			forsum(i,0,n) cout<<a[i];
			cout<<" ";
		} 
		sinh();
	}
}




