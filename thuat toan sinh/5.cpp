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

int index=1;

void sinh(int a[],int k,int n,int &index){
	int i=k-1;
	while(i>=0&&a[i]==n-k+i+1) --i;
	if(i<0) index=0;
	else{
		a[i]+=1;
		forsum(j,i+1,k){
			a[j]=a[j-1]+1;
		}
	}
}

AhLong{
	int n,k;cin>>n>>k;
	int a[k];
	
	forsum(i,0,k) a[i]=i+1;
	while(index){
		forsum(i,0,k) cout<<a[i];
		sinh(a,k,n,index);
		cout<<endl;
	}
}




