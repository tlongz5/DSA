#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <algorithm>
#define ll long long
using namespace std;

int main(){
	multiset<int> unveil;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		unveil.insert(x);
	}
	int congbo;
	cin>>congbo;
	for(int i=0;i<congbo;i++){
		int a;cin>>a;
		if(a==1){
			int m;cin>>m;
			unveil.insert(m);
		}
		else if(a==2){
			int m;cin>>m;
			if(unveil.find(m)!=unveil.end())
			unveil.erase(unveil.find(m));
		}
		else if(a==3){
			int check=0;
			int m;cin>>m;
				for(auto it=unveil.begin();it!=unveil.end();it++){
					if(*it>=m){
						check=1;
						cout<<m<<endl;
						break;
					}
				}
				if (check==0) cout<<-1<<endl;
		}
		else {
			int m;cin>>m;
			int check=0;
				for(auto it=unveil.rbegin();it!=unveil.rend();it++){
					if(*it<=m){
						check=1;
						cout<<m<<endl;
						break;
					}
				}
			if(check==0) cout<<-1<<endl;
		}
	}
}
