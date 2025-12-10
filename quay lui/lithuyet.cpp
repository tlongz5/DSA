#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
typedef long long ll;

int n,x[100],used[100];

void inkq(){
	forsum(i,1,n+1) cout<<x[i]; 
	cout<<endl;
}

void Try(int i,int j){
	for(int k=0;k<=1;k++){
		if(i==n&&j==n) inkq();
		if(a[i+1][j]&& i+1<n) Try(i+1,j);
		if(a[i][j+1] && j+1<n) Try(i,j+1);
	}
}

AhLong{
	cin>>n;
	
	Try(1,1);
}




