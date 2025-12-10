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
	forsub(i,n/7,0){
		int tmp=n-i*7;
		if(tmp%4==0){
			cout<<string(tmp/4,'4')<<string(i,'7');
			return 0;
		}
	}cout<<-1;
	
}
