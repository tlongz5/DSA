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
int dem[5];
int main(){
	
	
	int n;cin>>n;
	int a[n];
	for(int &x:a) {
		cin>>x;
		dem[x]++;
	}
	
	int cnt=dem[3]+dem[4];
	if(dem[1]>dem[3]) dem[1]-=dem[3];
	else dem[1]=0;
	
	cnt+=dem[2]/2+(dem[2]%2!=0);
	if(dem[2]%2) {
		if(dem[1]>1) dem[1]-=2;
		else dem[1]=0;
	}
	
	cnt+=dem[1]/4 + (dem[1]%4!=0); 
	cout<<cnt;
}


