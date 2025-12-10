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
int cnt,dem,sum,n;
int a[100][100];

void inkq(){
	forsum(i,1,n+1){
		forsum(j,1,n+1){
			if(a[i][j]) {
				cout<<"Q";
			}
			else cout<<".";
		}cout<<endl;
	}cout<<endl;
	
}

void Try(int i){
		forsum(j,1,n+1){
			if(!cot[j] && !d1[i-j+n] && !d2[i+j-1]){
				cot[j] = d1[i-j+n] = d2[i+j-1] = 1;
				a[i][j]=1;
				if(i==n) {
					inkq();
				}
				else{
					Try(i+1);
				}
				cot[j] = d1[i-j+n] = d2[i+j-1] = 0;
				a[i][j]=0;
			}
		}
}

AhLong{
	cin>>n;
	Try(1);
	
}
