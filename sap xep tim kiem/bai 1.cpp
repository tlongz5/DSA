#include <iostream>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <utility>
#include <string>
#include <vector>

typedef long long ll;
using namespace std;
int main(){
	int n;cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	
	for(int i=0;i<n-1;i++){
		int cnt=i;
		for(int j=i+1;j<n;j++){
			if(a[cnt]>a[j]){
				cnt=j;
			}
		}
		int tmp=a[cnt];
		a[cnt]=a[i];
		a[i]=tmp;
		for(int k=0;k<n;k++){
			cout<<a[k]<<" ";
		}cout<<endl;
	}
}

