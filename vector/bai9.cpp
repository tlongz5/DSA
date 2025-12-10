#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	map<char,int> ma;
	for(int i=0;i<n;i++){
		char x;cin>>x;
		if(ma.find(x)==ma.end()){
			ma[x]=1;
		}
		else ma[x]++;
	}
	cout<<ma.begin()->first<<" "<<ma.begin()->second<<endl<<endl;
	cout<<ma.end()->first<<" "<<ma.end()->second<<endl<<endl;
	for(map<char,int>::iterator it=ma.begin();it!=ma.end();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	cout<<endl;
	for(map<char,int>::reverse_iterator it=ma.rbegin();it!=ma.rend();it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
}
