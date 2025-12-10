#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <set>
#include <utility>
#include <cmath>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
#define MAX 505

const int mod=1e9+7;

char a[MAX][MAX];
int res[MAX][MAX];
int main(){
	int n;cin>>n;
	
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
			
		}
	}
	
	res[1][0]=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]=='*') res[i][j]=0;
			else {
				if(i==1) res[i][j]+=res[i][j-1];
				else if(j==1) res[i][j]+=res[i-1][j];
				else  res[i][j]+=res[i][j-1]+res[i-1][j];
			}
		}
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++) cout<<res[i][j]<<" ";
		cout<<endl;
	}
}

