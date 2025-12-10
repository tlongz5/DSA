#include <bits/stdc++.h>
using namespace std;

multiset<int> nhap(int n){
	multiset<int> v;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		v.insert(x);
	}
	return v;
}

int main()
{
	int n;cin>>n;
    multiset<int> se=nhap(n);
    int t;
    cin>>t;
    while(t--){
    	int  choice ;cin>>choice;
    	if(choice==1){
    		int x;cin>>x;
    		se.insert(x);
		}
		else if(choice==2){
			int x;cin>>x;
			if(se.find(x)!=se.end()){
				se.erase(se.find(x));
			}
		}
		else {
			int x;cin>>x;
			if(se.find(x)!=se.end()){
				cout<<"YES"<<endl;
			}
			else cout<<"NO"<<endl;
		}	
	}
    
    
}
