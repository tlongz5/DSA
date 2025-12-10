#include <stdio.h>
#include <math.h>

int Merge(int a[],int l,int r){
	if(l==r) return a[l];
	return fmax(Merge(a,l,l+r/2),Merge(a,l+r-(l+r)/2,r));
}
int main(){
	int a[100];
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	
	int l=0;
	int r=n-1;
	printf("%d",Merge(a,l,r));
}
