//#include <bits/stdc++.h>
//using namespace std;
//int main(){
//	int n;cin>>n;
//	int a[n][n];
//	for(int i=0;i<n;i++){
//		for(int j=0;j<n;j++){
//			cin>>a[i][j];
//		}
//	}
//	map<int,int> dem;
//	for(int j=0;j<n;j++){
//		if(dem.find(a[0][j])==dem.end())
//		dem[a[0][j]]=1;
//	}
//	for(int i=1;i<n;i++){
//		for(int j=0;j<n;j++){
//			if(dem.find(a[i][j])!=dem.end()){
//				dem[a[i][j]]++;
//				break;
//			}
//		}
//	}
//	for(auto i=dem.begin();i!=dem.end();i++){
//		 cout<<i->second<<" ";
//	}
//}
#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    
    // Nh?p ma tr?n
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    
    map<int, int> dem;
    set<int> x;
    for(int j = 0; j < n; j++) {
        if(x.find(a[0][j]) == x.end()) {
            dem[a[0][j]] = 1;
            x.insert(a[0][j]);
        }
    }
    for(int i = 1; i < n; i++){
        set<int> y;
        for(int j = 0; j < n; j++){
            if(y.find(a[i][j]) == y.end()){
                if(dem.find(a[i][j]) != dem.end()) {
                    dem[a[i][j]]++;
                }
                y.insert(a[i][j]);
            }
        }
    }
    
    // In ra k?t qu?
    for(auto it = dem.begin(); it != dem.end(); it++) {
        cout << it->first << " ";
    }
    
    return 0;
}

