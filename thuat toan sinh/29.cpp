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

bool check(int s[]){
	forsum(i,1,n) if(abs(s[i]-s[i-1])==1) return 0;
	return 1; 
}


AhLong{
	cin>>n;
	int s[11];
	forsum(i,0,n) s[i]=i+1;
	while(ok){
		if(check(s)) {
			forsum(i,0,n) cout<<s[i];
			cout<<endl;
		}
		sinh(s);
	}
}

