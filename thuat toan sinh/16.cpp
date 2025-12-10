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

int a[1000],n,k;
int ok;

void ktao(){
	ok=1;
	cin>>n>>k;
	forsum(i,0,k) cin>>a[i];
}


AhLong{
	ktao();
	int dem=0;
	forsum(i,k-1,0){
		if(a[i]==n) dem++;
		else break;
	}if(k==dem) cout<<dem;
	else cout<<dem+1;
}




