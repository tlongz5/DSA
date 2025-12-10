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

int x[100],cot[100],d1[100],d2[100];
int a[100][100];
int cnt,dem,sum;


void Try(int i){
	forsum(j,1,9){
		if(cot[j] && d1[i-j+8] && d2[i+j-1]){
			x[i] = j;
			sum+=a[i][j];
			cot[j]= d1[i-j+8] = d2[i+j-1] = 0;
			if(i==8) dem=max(dem,sum);
			else Try(i+1);
			//backtrack
			cot[j] = d1[i-j+8] = d2[i+j-1] =1;
			sum-=a[i][j];
		}	
	}
		
}

AhLong{
	forsum(i,1,9){
		forsum(j,1,9) cin>>a[i][j];
	}
	forsum(i,1,100) cot[i] = d1[i] = d2[i] = 1;
	Try(1);
	cout<<dem;
}
