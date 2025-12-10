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

int a[101],b[101],ok,n,k;
vector<string> v;

void Try(string s,int idx){
	if(s.size()==n) v.push_back(s);
		forsum(j,0,n){
			if(!b[j] && abs(a[j]-idx)>1){
				b[j]=1;
				Try(s+to_string(a[j]), a[j]);
				b[j]=0;
			}
		}	
}

AhLong{
	cin>>n;
	int dem=1;
	forsum(i,0,n) a[i]= dem++;
	Try("",-1);
	
	sort(v.begin(),v.end());
	for(auto x:v){
		cout<<x<<endl;
	}
}
