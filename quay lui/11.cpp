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

int n,k,a[101],ok;
vector<string> v;
int dem=0;

void Try(string s,int last, int i){
	forsum(j,i,n){
		if(a[j]>last){
			string s1= s+ to_string(a[j]) + " ";
			if(s1.size()>2) {
				v.push_back(s1); 
			}
			Try(s1,a[j], j+1);
		}
	
	}		
}

AhLong{
	cin>>n;
	forsum(i,0,n) cin>>a[i];
	
	Try("",0,0);
	sort(v.begin(),v.end());
	for(auto x:v){
		cout<<x<<endl;
	}
}
