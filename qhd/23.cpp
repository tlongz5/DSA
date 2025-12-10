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

int a[MAX];
int res[10001];
int main(){
	string s;cin>>s;
	int n=s.size();
	int res=1;
	s="1"+s;
	
	for(int i=1;i<=n;i++) res[i][i]=1;
	
	for(int k=2;k<=n;k++){
		for(int i=1;i<=n-k+1;i++){
			int j=i+k-1;
			if(k==2&&s[i]==s[j]) res[i][j]=1;
			else res[i][j]= res[i+1][j-1] && (s[i]==s[j]);
			
			if(res[i][j]) res=max(res,j-i+1);
		}
	}
	cout<<res;
}

