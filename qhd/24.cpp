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

int F[1000];
int main(){
	int n;cin>>n;
	int k=sqrt(n);
	for(int i=1;i<=n;i++){
		F[i]=i;
		for(int j=1;j<=sqrt(i);j++){
			F[i]= min(F[i],F[i-j*j]+1);
		}
		
	}
	
	cout<<F[n];
}

