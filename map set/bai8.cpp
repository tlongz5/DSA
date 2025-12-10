#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++) {
    	int x;cin>>x;
    	a.push_back(x);
	}
    int f[n];set<int>se;
    for(int i=n-1;i>=0;i--){
    	se.insert(a[i]);
    	f[i]=se.size();
	}
	int b;cin>>b;
	while(b--){
		int x;cin>>x;
		cout<<f[x]<<endl;
	}
}
