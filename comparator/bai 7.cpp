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
	int *s1=lower_bound(a,a+n,x);
	if(s1!=a+7) cout<<s1-a<<endl;
	else cout<<-1<<endl;
	int *s2=upper_bound(a,a+n,x);
	if(s2!=a+7) cout<<s2-a<<endl;
	else cout<<-1<<endl;
	
	
}

