#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    multiset<int> v;
    for(int i=0;i<n;i++) {
    	int x;cin>>x;
    	v.insert(x);
	}
    int m;cin>>m;
    while(m--){
    	int b,c;cin>>b>>c;
    	if(b==1){
    		v.insert(c);	
		}
		else if(b==2){
			if(v.find(c)!=v.end()){
				multiset<int>::iterator it = v.find(c);
				v.erase(it);
			}
			
		}
		else if(b==3){
			if(v.size()){
				cout<<*v.begin()<<endl;
			}
			else  cout<<"-1"<<endl;
		}
		else {
			if(v.size()){
				cout<<*v.rbegin()<<endl;
			}
			else cout<<"-1"<<endl;
		}
	}
}
