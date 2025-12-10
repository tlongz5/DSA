#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <cctype>
#include <cstring>

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)

using namespace std;
typedef long long ll;

int a[100],n,ok,cnt;

void ktao(){
	ok=1;
	a[1]=1;
	cnt=1;
}

void sinh(){
	int i=cnt;
	while(i>=1 && a[i]==n){
		--i;
	}
	
	if(!i) ok=0;
	else if(i==cnt){
		cnt++;
		a[cnt]=a[cnt-1]+1;
	}
	else {
		a[i]++;
		cnt=i;
	}
}

AhLong{
	cin>>n;
	ktao();
	while(ok){
		forsum(i,1,cnt+1) cout<<a[i]<<" ";
		cout<<endl;
		sinh();
	}
}




