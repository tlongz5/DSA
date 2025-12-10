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

ll gap(int n,int k){
	ll i=pow(2,n-1);
	if(k==i) return n;
	if(k<i) return gap(n-1,k);
	if(k>i) return gap(n-1,k-i);
}
 
int main(){
	int n,k;
	cin>>n>>k;
	cout<<gap(n,k);
}
