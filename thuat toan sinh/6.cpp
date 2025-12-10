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

int index=1;

void sinh(int a[],int n,int &index){
	int i=n-2;
	while(i>=0&&a[i]<a[i+1]) --i;
	if(i<0) index=0;
	else{
		int j=n-1;
		while(a[i]<a[j]) j--;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n);
	}
}

AhLong{
	int n;cin>>n;
	int a[n];
	forsum(i,0,n) a[i]=n-i;
	while(index){
		forsum(i,0,n) cout<<a[i];
		sinh(a,n,index);
		cout<<endl;
	}
}




