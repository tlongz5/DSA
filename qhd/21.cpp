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
	vector<int> v;
	
	int n;cin>>n;
	int sum=0;
	forsum(i,0,n) {
		cin>>a[i];
		sum+=a[i];
	}
	
	res[0]=1;
	forsum(i,0,n){
		for(int j=sum;j>=a[i];j--){
			if(res[j-a[i]]){
				res[j]=1;
			}
		}
	}
	
	for(int i=0;i<=sum;i++){
		if(res[i]) cout<<i<<" ";
	}
	
}

