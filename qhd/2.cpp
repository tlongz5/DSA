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

const int mod=1e9+7;

int res[1001];
int main(){
	int n;cin>>n;
	int a[n];
	for(int &x:a) cin>>x;
	
	
	for(auto &x:res) x=1; 
	forsum(i,1,n){
		forsub(j,i-1,0){
			if(a[j]<a[i]){
				res[i]=max(res[i],res[j]+1);
			}
		}
	}
	
	cout<<*max_element(res,res+n);
	
	
}


