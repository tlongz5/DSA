#include <iostream>

using namespace std;
long long a[100000],n,k,res,i,j;
int main () {

	cin>>n>>k;
	if(k==0)
	for(i=1;i<=n;i++)
	cout<<i<<" ";
	else
	if(n%(2*k)!=0 || k>n)
	cout<<-1;
	else{
		int spd=n/(2*k);
		int st=1, en=2*k;
		for(i=1; i<=spd; i++){
			for(j=st; j<=en; j++)
			if(j+k<=en)
			cout<<j+k<<" ";
			else
			cout<<j-k<<" ";
			st=en+1;
			en=en+2*k;
		}
	}

}
