#include <iostream>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i++)

int n,k,a[100],ok,dem=-1;
int res=1e9+7;

void Try(int sum,int i){
	dem++;
	if(sum==k){
		ok=1;
		res=min(res,dem);
	}
	
	for(int j=i;j<n;j++){
		if(sum+a[j] <= k){
			Try(sum+a[j],j+1);
		}
	}
	
	dem--;	
}

AhLong{
	cin>>n>>k;
	forsum(i,0,n) cin>>a[i];
	
	Try(0,0);
	
	if(!ok) cout<<-1;
	else cout<<res;
}
