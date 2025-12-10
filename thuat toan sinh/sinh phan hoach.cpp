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

int a[100],n,cnt,ok;

void ktao(){
	cnt=1;
	a[0]=n;
	ok=1;
}
void sinh(){
	int i=cnt-1;
	while(i>=0 &&a[i]==1) --i;
	if(i<0) ok=0;
	else{
		a[i]--;
		int d=cnt-i;
		cnt=i+1;
		int q=d/a[i];
		int r=d%a[i];
		if(q){
			forsum(j,0,q) {
				a[cnt]=a[i];
				++cnt;
			}
		}
		if(r){
			a[cnt]=r;
			++cnt;
		}
	}
}

AhLong{
	cin>>n;
	ktao();
	while(ok){
		forsum(i,0,cnt) cout<<a[i]<<" ";
		cout<<endl;
		sinh();
	}
}




