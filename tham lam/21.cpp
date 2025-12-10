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

int main(){
	int n;cin>>n;
	int a[n];
	int le=0;
	for(int &x:a){
		cin>>x;
		if(x%2) le++;
	}
	if(le%2==0) cout<<"YES";
	else{
		sort(a,a+n);
		for(int i=0;i<n;i+=2){
			if(abs(a[i]-a[i+1])!=1) {
				cout<<"NO";
				return 0;
			}
		}
		cout<<"YES";
		
	}
}


