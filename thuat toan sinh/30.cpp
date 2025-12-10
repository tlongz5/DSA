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

int n;
int ok=1;

void sinh(int s[]){
	int i=n-2;
	while(i>=0 && s[i]>s[i+1]) --i;
	
	if(i<0) ok=0;
	else{
		int j=n-1;
		while(s[j]<s[i]) --j;
		swap(s[i],s[j]);
		reverse(s+i+1,s+n);
	}
}



AhLong{
	int n,s;cin>>n>>s;
	int a[n];
	int b[n];
	for(int &x:a) cin>>x;
	for(int &x:b) cin>>x;
	
	vector<pair<int,int>> v;
	
	
} 

