#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>
#include <cstring>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)

int maxSum(int a[],int l,int r,int m){
	int sumL =0, maxSumL = 0;
	int sumR =0, maxSumR = 0;
	for(int i=m;i>=l;i--){
		sumL+=a[i];
		maxSumL= max(maxSumL,sumL);
	}
	for(int i=m+1;i<=r;i++){
		sumR+=a[i];
		maxSumR= max(maxSumR,sumR);
	}
	return maxSumL + maxSumR;
}

int dequy(int a[],int l,int r){
	int m=(l+r)/2;
	if(l==r) return a[l];
	return max({
		maxSum(a,l,r,m),
		dequy(a,l,m),
		dequy(a,m+1,r),
	});
}
 
int main(){
	int n;
	cin>>n;
	int a[n];
	forsum(i,0,n) cin>>a[i];
	cout<<dequy(a,0,n-1);
}
