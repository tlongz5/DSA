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

int a[100],n,ok;

void ktao(){
	ok=1;
	int dem=0;
	a[0]=8;
	forsum(i,1,n) {
			a[i]=6;
			dem++;
		if(dem>3) {
			if(i==n-1) a[i-2]=8;
			else a[i]=8;
			dem=0;
		}	
	}
}

void sinh(){
	int i=n-2;
	int dem=1;
	while(i>1 && a[i]==6){
		--i;
		dem++;
	}
	
	if(i==1) ok=0;
	else {
		if(dem<3) 
	}
}

AhLong{
	cin>>n;
	ktao();
	while(ok){
		forsum(i,0,n) cout<<a[i]<<" ";
		cout<<endl;
		sinh();
	}
}




