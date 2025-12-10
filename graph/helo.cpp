#include <iostream>
#include <cstdio>

using namespace std;

int main(){
//	freopen("tienphoto.inp", "r", stdin);
//	freopen("tienphoto.out", "w", stdout);
	
	int l,m,n;cin>>l>>m>>n;
	
	int price1= (l==3? 2:1)*(m==1? 300:400)*n;
	int price2= (l==3? 2:1)*(m==1? 250:350)*n;
	
	cout << ((n<100)? price1:price2);
}
