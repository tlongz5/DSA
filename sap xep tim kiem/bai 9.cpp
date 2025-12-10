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
    int n;cin>>n;
    int a[n];
    set<int> se;
    for(i,0,n) {
    	cin>>a[i];
    	se.insert(a[i]);
	}
	for(i,0,n){
		auto j=++se.find(a[i]);
		if(j==se.end()) cout<<"_ ";
		else cout<<*j<<" ";
	}
    
    
	
}
//#include<bits/stdc++.h>
//using namespace std;
//using ll = long long;
//const int MOD = 1e9 + 7;
//int main()
//{
//    int n ; cin >> n;
//    int a[n] ; vector<int>v;
//    for(int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//        v.push_back(a[i]);
//    }
//    sort(v.begin(), v.end());
//    for(int i = 0 ; i < n ;i++) 
//    {
//        auto it = upper_bound(v.begin() , v.end() , a[i]);
//        if(it != v.end())
//        {
//            cout << *it << " ";
//        }
//        else cout << "_ ";
//    }    
//}


