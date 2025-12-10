#include <iostream>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i++)

int n,a[100][100],check;
string s;

void backtrack(string s,int i,int j){
	a[i][j]=0;
	if(i==n-1 && j==n-1) {
		check=1;
		cout<< s<<endl;
	}
	
	if(i+1<n && a[i+1][j]) {
		backtrack(s+'D',i+1,j);
	}
	
	if(j+1<n && a[i][j+1]) {
		backtrack(s+'R',i,j+1);
	}
		
	if(i-1>=0 && a[i-1][j]) {
		backtrack(s+'U',i-1,j);
	}
	
	if(j-1>=0 &&a[i][j-1]) {
		backtrack(s+'L',i,j-1);
	}
	a[i][j]=1;
	
}

int main(){
	cin>>n;
	s="";
	forsum(i,0,n){
		forsum(j,0,n) cin>>a[i][j];
	}
	
	backtrack("",0,0);
	
}
