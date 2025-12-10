#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <utility>
#include <string>
#include <algorithm>

#define AhLong int main()
#define for(i,a,b) for(int i=a;i<b;i++)

typedef long long ll;
using namespace std;

AhLong{
    int n,k;cin>>n>>k;
    int a[n];
    multiset<int> se;
    for(i,0,n) {
    	cin>>a[i];
	}
    int dem=0;
    int l=0;
    for(i,0,n){
    	se.insert(a[i]);
    	while(*se.rbegin()-*se.begin()>k){
    		se.erase(se.find(a[l]));
    		l++;
		}dem+=i-l+1;
	}
	
	cout<<dem;
    
}


