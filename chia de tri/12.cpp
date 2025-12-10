#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include<algorithm>
#include <cstring>

using namespace std;

#define ll long long
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i--)

const int MOD =1e9+7;

struct matrix{
	ll f[2][2];
	friend matrix operator * (matrix a,matrix b){
		matrix res;
		for(int i=0;i<2;i++){
			forsum(j,0,2){
				res.f[i][j]=0;
				forsum(k,0,2){
					res.f[i][j]+=a.f[i][k]*b.f[k][j];
					res.f[i][j]%=MOD;
				}
			}
		}
		return res;
	}
};

matrix powMod(matrix a,int n){
	if(n==1) return a;
	matrix x = powMod(a,n/2);
	
	if(n%2) return x*x*a;
	else return x*x; 
}
 
int main(){
	int n;cin>>n;
	matrix a;
	a.f[0][0] = a.f[0][1] = a.f[1][0] = 1;
	a.f[1][1] = 0;
	matrix res = powMod(a,n);
	cout<<res.f[1][0];
}
