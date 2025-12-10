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
	int a,b;cin>>a>>b;
	while(1){
		if(b%a ==0){
			cout<<1<<"/"<<b/a;
			break;
		}
		int res=b/a+1;
		cout<<1<<"/"<<res<<" + ";
		a=a*res-b;
		b*=res;
	}
}


