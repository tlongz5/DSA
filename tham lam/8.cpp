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
	priority_queue<ll , vector<ll> , greater<ll>> q;
	for(int i = 0 ;i < n;i++)
    {
        int x ; cin >> x;
        q.push(x);
    }
    int sum=0;
    while(q.size()>1){
    	int res=q.top();q.pop();
    	int tmp=q.top();q.pop();
    	q.push(res+tmp);
    	sum+=res+tmp;
	}
	cout<<sum;
}
