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
    map<int,int> ma;
    int a[n];
    for(i,0,n){
    	cin>>a[i];
    	ma[a[i]]++;
	}
	for(i,0,n){
		if(ma[a[i]]>1) ma[a[i]]--;
		else ma.erase(a[i]);
		if(ma.find(k-a[i])!=ma.end()) {
			cout<<"yes";
			return 0;
		}
	}
	cout<<"NO";
}

//c2 
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//
//int main()
//{
//    int n , k ; cin >> n >> k;
//    int a[n];
//    map<int,bool>mp;
//    for(int i = 0 ; i < n;i++)
//    {
//        cin >> a[i];
//    }
//    for(int i = 0 ;i < n;i++)
//    {
//        if(k > a[i] && mp[k - a[i]])
//        {
//            cout << "YES";
//            return 0;
//        }
//        mp[a[i]] = true;
//    }
//    cout << "NO";
//    return 0;
//}

