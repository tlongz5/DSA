#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    set<int> a;
    set<int> b;
    for(int i=0;i<n;i++){
    	int x;cin>>x;
    	a.insert(x);
	}
	for(int i=0;i<m;i++){
		int x;cin>>x;
		b.insert(x);
	}
//	for(int i:a){
//		if(b.find(i)==b.end()) cout<<i<<" ";
//	}
set<int> c;
 for(set<int>::iterator it = a.begin(); it != a.end(); ++it){
        int element = *it;
        if(b.find(element)==b.end())
        c.insert(element);
    }
     for(set<int>::iterator it = b.begin(); it != b.end(); ++it){
        int element = *it;
        if(a.find(element)==a.end())
        c.insert(element);
    }
     for(set<int>::iterator it = c.begin(); it != c.end(); ++it){
        cout<< *it<<" ";
    }
}
