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

AhLong{
	int n,m;cin>>n>>m;
	string s1="";
	string s2="";
	
	forsum(i,1,n+1){
		forsum(j,0,10){
			if(i==1&&j==0) continue;
			if((m-j)<=(n-i)) {
				s1+=to_string(j);
				m-=j;	
			}
		}
	}cout<<s1<<endl;
	
	forsum(i,1,n+1){
		forsub(j,9,1){
			if((m-j)>=(n-i)) {
				s2+=to_string(j);
				m-=j;
				
			}
		}
	}
	cout<<s2;
}



