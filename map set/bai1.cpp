#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <cmath>
#include <utility>
#define ll long long
using namespace std;
int main(){
	multiset<int> ms;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		ms.insert(x);
	}
	int m;cin>>m;
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		if(a==1) ms.insert(b);
		else if(a==3){
			if(ms.find(b)!=ms.end()) cout<<"YES\n";
			else cout<<"NO\n";
		}
		else {
			if(ms.find(b)!=ms.end()){
				multiset<int>::iterator it = ms.find(b);
				// c2: auto it=ms.find(b);
				ms.erase(it);
			}
		}
	}
}

