#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
#include <utility>

using namespace std;
int main() {
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int sum1=0;
    for(int i=0;i<k;i++){
    	sum1+=a[i];
	}
	int dem=0;
	int index=0;
	int sum2=sum1;
	for(int i=k;i<n;i++){
		sum1+=a[i]-a[i-k];
		if(sum1>sum2){
			sum2=sum1;
			index=i-k+1;
		}
	}
	cout<<sum2<<endl;
	for(int i=index;i<index+k;i++){
		cout<<a[i]<<" ";
	}
}

