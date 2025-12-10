#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <utility>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n,k;cin>>n>>k;
    int a[n];
    multiset<int> se;
    for(int i=0;i<n;i++) {
    	cin>>a[i];
	}
    for(int i=0;i<k;i++){
    	se.insert(a[i]);
	}cout<<*se.begin()<<" "<<*se.rbegin()<<endl;
    for(int i=k;i<n;i++){
		se.erase(se.find(a[i-k]));
		se.insert(a[i]);
		cout<<*se.begin()<<" "<<*se.rbegin()<<endl;
	}
    	
}

