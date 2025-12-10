#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;

int n;

struct matran
{
    ll F[11][11];
    friend matran operator * (matran a , matran b)
    {
        matran res;
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ; j++)
            {
                res.F[i][j] = 0;
                for(int k = 0 ; k < n ; k++)
                {
                    res.F[i][j] += a.F[i][k] * b.F[k][j];
                    res.F[i][j] %= MOD;
                }
            }
        }
        return res;
    }    
};
matran powMod(matran a , int n)
{
    if(n == 1) return a;
    matran tmp = powMod(a , n / 2);
    if(n % 2 == 0)
    {
        return tmp * tmp;
    }
    else return tmp * tmp * a;
}
int main()
{
    int k ; cin >> n >> k;
    matran a;
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++) cin>>a.F[i][j];
	}
    matran res = powMod(a , k);
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++) cout<<res.F[i][j]<<" ";
    	cout<<endl;
	}
}
