#include <iostream>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;

#define AhLong int main()
#define forsum(i,a,b) for(int i=a;i<b;i++)
#define forsub(i,a,b) for(int i=a;i>=b;i++)

int n,k,a[101],b[101],ok,cnt;


bool Try(int sum,int i,int check){
	if(!check) return 1;
	if(sum==cnt){
		return Try(0,0,check-1);
	}
	
	 forsum(j,i,n) {
        if (!b[j] && sum + a[j] <= cnt) {
            b[j] = 1;
            if (Try(sum + a[j], j+1, check)) {
                return true;
            }
            b[j] = 0;
        }
    }
    
    return false;
//	forsum(j,i,n){
//		if(a[i]>cnt) return 0;
//		if(!b[i]){
//			if(sum==cnt) sum=0;
//			
//			if(i==n && !sum){
//				return 1;
//			}
//			b[i]=1;
//			if(sum+a[i]<=cnt){
//				Try(sum+a[i],i+1);
//			}
//			b[i]=0;
//		}	
//	}
		
}

AhLong{
	cin>>n>>k;
	forsum(i,0,n) {
		cin>>a[i];
		cnt+=a[i];
	}
	if(cnt % k != 0){
		cout<<0<<endl;
		return 0;
	}
	cnt=cnt/k;
	
	bool i= Try(0,0,k);
	if(i) cout<<1;
	else cout<<0;
}
