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

int n,k,s,dem,x[100];

void check(){
	int sum=0;
	forsum(i,1,k+1) sum+=x[i];
	if(sum==s) dem++;
}

void Try(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
			x[i]=j;
			if(i==k) check();
			else Try(i+1);
	}
}

AhLong{
	cin>>n>>k>>s;
	Try(1);
	cout<<dem;
}




