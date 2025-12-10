#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>
#include <cstring>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)

char a[1000][1000];
int cnt;

bool check(char a[i][j],int i,int l,int r,int dem){
	for(int k= l ; k<=r;k++){
		if(a[i][j] != '@') {
			if(a[i][j/2+j%2] == '@') return 1;
			if
		}
	}
	return 
}

 
int main(){
	
	int n,m;cin>>n>>m;
	forsum(i,0,n){
		forsum(j,0,m) cin>>a[i][j];
	}
	
	forsum(i,0,n){
		forsum(j,0,m){
			check(a[i][j],i,j,j,0);
		}
	}
	
	
	
}
