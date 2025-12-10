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
	int a,b,c;cin>>a>>b>>c;
	int sinh_ton=b*c;
	b=b-b/7;
	if(b*a<sinh_ton) cout<<-1;
	else{
		cout<<sinh_ton/a+ (sinh_ton%a!=0);
	}
}
