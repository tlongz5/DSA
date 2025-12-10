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

int a[30];
int ok=1;
int n;

void sinh(int b[]){
	int i=n-1;
	while(i>=0 && b[i]){
		b[i]=0;
		--i;
	}
	if(i<0) ok=0;
	else b[i]=1;
}

AhLong{
	cin>>n;
	forsum(i,0,n) cin>>a[i];
	
	int b[n];
	forsum(i,0,n) b[i]=0;
	int Min=1e9+7;
	
	while(ok){
		int sum1=0;
		int sum2=0;
		forsum(i,0,n){
			if(b[i]) sum1+=a[i];
			else sum2+=a[i];
		}Min=min(abs(sum1-sum2),Min);
		sinh(b);
	}
	cout<<Min;
}



