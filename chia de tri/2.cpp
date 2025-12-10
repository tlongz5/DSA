#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>
#include <cstring>
#include <map>
#include <set>
#include <utility>
#include <cmath>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)
 
int main(){
	int a[]={1000,500,200,100,50,20,10,5,2,1};
	int n;cin>>n;
	int cnt=0;
	forsum(i,0,10){
		cnt+=n/a[i];
		n%=a[i];
	}
	cout<<cnt;
}
