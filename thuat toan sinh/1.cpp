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

void sinh(int a[],int n){
	int i=n-2;
	while(i>=0&&a[i]>a[i+1]){
		--i;
	}
	if(i<0){
		reverse(a,a+n);
	}
	else{
		int j=n-1;
		while(a[i]>a[j]) --j;
		int sw=a[i];
		a[i]=a[j];
		a[j]=sw;
		reverse(a+i+1,a+n);
	}
	
}

AhLong{
	int n;cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	sinh(a,n);
	for(int &x:a) cout<<x<<" ";
}




