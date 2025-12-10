#include <iostream>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i++)

int ok,n,m;
string t;
char a[101][101];


void Try(string s,int i,int j){
	if(s==t){
		ok=1;
		return ;
	}
	if(i==n || j==m) return ;
	
	forsum(h,i,n){
		forsum(c,j,m){
			string si = s + a[h][c];
			if(t.find(si) != string::npos){
				cout<<si<<endl;
				if(h<n) Try(si,h+1,c);
				if(c<m) Try(si,h,c+1);
			}
		}
	}
}

AhLong{
	cin>>n>>m;
	forsum(i,0,n) {
		string h;cin>>h;
		int dem=0;
		forsum(j,0,m){
			a[i][j]=h[dem++];
		}
	}
	
	cin>>t;
	Try("",0,0);
	
	if(ok) cout<<"YES";
	else cout<<"NO";
}
