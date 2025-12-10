#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <utility>
#include <string>
#include <algorithm>

#define AhLong int main()
//#define for(i,a,b) for(int i=a;i<b;i++)

typedef long long ll;
using namespace std;

AhLong{
    int n;cin>>n;
    vector<pair<int,int>> ma;
    for(int i=0;i<n;i++) {
    	int x,y;cin>>x>>y;
    	ma.push_back({y,x});
	}
	sort(ma.begin(),ma.end());
	auto j=ma.begin();
	int cnt=1;
	for(auto i=ma.begin();i!=ma.end();i++){
		if(j->first<i->second) {
			cnt++;
			j=i;
		}
	}
	cout<<cnt;
}

//#include<bits/stdc++.h>
//using namespace std;
//using ll = long long;
//const int mod = 1e9 + 7;
//bool comp(pair<int, int> a, pair<int, int> b)
//{
//    return a.second < b.second;
//}
//int main()
//{
//    int n; cin >> n;
//    vector<pair<int, int>> v;
//    for(int i = 0; i < n; i++)
//	{
//       pair<int, int> p;
//       cin >> p.first >> p.second;
//       v.push_back(p);
//    }
//    sort(v.begin(), v.end(),comp);
//    ll cnt = 1;
//    ll temp = v[0].second;
//    for(int i = 1; i < n; i++)
//	{
//        if(v[i].first > temp)
//		{
//            ++cnt;
//            temp = v[i].second;
//        }
//    }
//    cout << cnt;
//    return 0;
//}

