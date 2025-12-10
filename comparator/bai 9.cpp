#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>

typedef long long ll;

using namespace std;

int main(){
	int n,x;cin>>n>>x;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int *s1=upper_bound(a,a+n,x);
	s1--;
	if(*s1==x){
		cout<<s1-a<<endl;
	}
	else if(s1==a+n){
		cout<<-1;
	}
		
}

