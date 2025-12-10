#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>

#define AhLong int main()
#define for(i,a,b) for(int i=a;i<b;i++)

typedef long long ll;
using namespace std;

int check(int a[],int n,int k,float mid){
	int sum=0;
	for(i,0,n){
		sum+=(int)a[i]/mid;
	}
	return sum>=k;
}

AhLong{
	int n,k;cin>>n>>k;
	int a[n];
	
	for(i,0,n) cin>>a[i];
	
	float l=0,r=10e8;
	while(l<=r){
		float mid=(l+r)/2;
		if(check(a,n,k,mid)){
			
		}
	}
	
}



