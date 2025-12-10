#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	int a,b;
	cin>>n>>a>>b;
	
	cout<<min(n*a,n/b*b+n%b*a);
}
