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

int n,c[100][100],x[100], visited[105];
int d=0,ans = INT_MAX, cmin = INT_MAX;

void Try(int i){
	forsum(j,2,n+1){
		if(!visited[j]){
			x[i]=j;
			visited[j] = 1;
			d+= c[x[i-1]][j];
			if(i==n){
				ans=min(ans,d+c[x[i]][1]);
			}
			else if(d+ (n+1-i) * cmin < ans) Try(i+1);
			d -= c[x[i-1]][j];
			visited[j] = 0;
		}
	}
}

AhLong{
	cin>>n;
	forsum(i,1,n+1) {
		forsum(j,1,n+1) cin>>c[i][j];
	} 
	x[1] = 1;
	
	Try(2);
	cout<<ans;
}
