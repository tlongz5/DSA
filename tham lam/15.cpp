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
 

int main(){
	int n;cin>>n;
	int a[n];
	int cnt=1;
	int sum=1;
	for(int &x:a) cin>>x;
	
	forsum(i,1,n){
		if(a[i]-a[i-1]>0) cnt++;
		else cnt=1;
		sum+=cnt;
		cout<<cnt<<endl;
	}cout<<sum;
}


